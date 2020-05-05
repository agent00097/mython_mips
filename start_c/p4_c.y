%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
//int yyerror(char const *s);
int yyerror();
int yylex();
const char* pass_msg = "Input Passed Checking\n";
int semantic_error = 0;
char function_name[30];
char last_used[20];


//Creating an array of sT_registefrsd that hfolds int value,t# is empty if it's 0 and 1 if it is occupied
int t[8];
%}
 

%union{
	char id_name[30];
	char name[30];
	int value;
	struct {
		int reg;
		int value;
		char this_name[30];
		int is_string;
	} loc;
}

%token ADD MINUS MUL DIV EQ LT LE GT GE ASSIGN NE
%token DEF ENDDEF IF ENDIF ELSE WHILE ENDWHILE PRINT INPUT TRUE FALSE RETURN
%token LP RP COLON COMMA
%token COMMENT
%token <value> INTEGER
%token <name> STRING ID
%type <loc> factor term exp expression expression_list
%type <id_name> headofid

%%

program		: function_list end_list 													{printf("\nli $v0,10\nsyscall\n");}

function_list 	: function_list function 
		| function																		{printf("\t.globl main\nmain\:\n\n");}

headstart	: DEF ID LP																	{printf("\t.text\n%s\:\n\t.data\n %s_RA\: .word 0\n\t.text\n sw $ra,%s_RA\n\n", $2,$2,$2); strcpy(function_name, $2);}

function	: headstart parameters RP COLON statements  ENDDEF 							
		| headstart RP COLON statements ENDDEF 											{free_all_registers();sprintf(last_used, "$t%d", checkFreeIndex());printf("\tlw %s,%s_RA", last_used , function_name); printf("\n\tjr %s\n", last_used); free_all_registers();}

parameters	: parameters COMMA ID 
		| ID

statements	: statements statement 
		| statement

statement	: assignment_stmt 
		| print_stmt 
		| input_stmt 
		| condition_stmt 
		| while_stmt 
		| call_stmt 
		| return_stmt

headofid	:	ID ASSIGN											  {printf("\t.data\n\t.align 2\n%s_%s\: .word 0\n\t.text\n", function_name, $1); strcpy($$, $1);}

assignment_stmt	: headofid expression								  {printf("sw %s,%s_%s\n\n", last_used, function_name, $1); free_all_registers();}							  

return_stmt	: RETURN exp   

expression	: rel_exp
		| exp													      {$$.reg = $1.reg; $$.value = $1.value; strcpy($$.this_name, $1.this_name);}

rel_exp		: exp EQ exp 
		| exp NE exp 
		| exp LT exp 
		| exp LE exp 
		| exp GT exp 
		| exp GE exp 
		| LP rel_exp RP

exp		: exp ADD term 												  {$$.reg = $1.reg; $$.value = $1.value + $3.value;  printf("add $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); sprintf(last_used, "$t%d", $$.reg);free_register($3.reg);}
		| exp MINUS term 											  {$$.reg = $1.reg; $$.value = $1.value - $3.value;  printf("sub $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); sprintf(last_used, "$t%d", $$.reg);free_register($3.reg);}
		| term														  {$$.reg = $1.reg; $$.value = $1.value; strcpy($$.this_name, $1.this_name);}

term		: term MUL factor 										  {$$.value = $1.value * $3.value; $$.reg = $1.reg; printf("mul $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); sprintf(last_used, "$t%d", $$.reg); free_register($3.reg);}
		| term DIV factor 											  {$$.value = $1.value / $3.value; $$.reg = $1.reg; printf("div $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); sprintf(last_used, "$t%d", $$.reg); free_register($3.reg);}
		| factor													  {$$.reg = $1.reg; $$.value = $1.value; strcpy($$.this_name, $1.this_name);}

factor		: LP exp RP 
		| INTEGER                                                     {$$.reg = checkFreeIndex(); $$.value = $1; printf("li $t%d, %d\n", $$.reg, $1); sprintf(last_used, "$t%d", $$.reg);}
		| STRING 													  {strcpy($$.this_name, $1); $$.is_string = 1;}
		| ID 
		| TRUE 
		| FALSE 
		| MINUS factor 
		| call_stmt

print_stmt	: PRINT LP expression_list RP							  {if ($3.is_string == 1) {printf("\n\t.data\nstr8\:\t.asciiz \"%s\"\n\t.text", $3.this_name);} else {printf("\nli $v0,1\n"); printf("move $a0,$t%d\nsyscall\n", $3.reg);}}

input_stmt	: headofid INPUT LP RP									  {printf("li $v0,5\nsyscall\n"); sprintf(last_used, "$v0"); printf("sw %s,%s_%s\n", last_used, function_name, $1);}

call_stmt	: ID LP RP 
		| ID LP expr_list RP

condition_stmt	: if_head statements ENDIF 
		| if_head statements ELSE COLON statements ENDIF

if_head		: IF expression COLON

while_stmt	: WHILE expression COLON statements ENDWHILE

expression_list	: expression_list COMMA expression 
		| expression												 {$$.reg = $1.reg; $$.value = $1.value; strcpy($$.this_name, $1.this_name);}

expr_list	: expr_list COMMA exp 
		| exp

end_list	: end_list end 
		| end

end		: call_stmt 
		| print_stmt 
		| input_stmt

%%

int checkFreeIndex() {
	for(int i = 0 ; i < 8 ; i++) {
		if(t[i] == 0) {
			t[i] = 1;
			return i;
		}
	}
	yyerror();
}

void free_register(int i) {
	t[i] = 0;
}

void free_all_registers() {
	int i = 0;
	for(i = 0; i < 8; i++) {
		t[i] = 0;
	}
}

int main() {
	 //Code for debugging
    #if YYDEBUG == 1
    extern int yydebug;
    yydebug = 1;
    #endif


   yyparse();
   if (!semantic_error){
	fprintf(stderr, "%s", pass_msg);
   }
   return 0;
}

int lookup(char* name) {
	//This function should return something if the variable exists
	return 0;
}
 
//int yyerror (char const *s) {
int yyerror(){
   //fprintf (stderr, "%s at line %d\n", s, yylineno);
   fprintf(stderr, "syntex error at line %d\n", yylineno);
   //return 0;
   exit(-1);
}


