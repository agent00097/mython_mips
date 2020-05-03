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


//Creating an array of sT_registers that holds int value,t# is empty if it's 0 and 1 if it is occupied
int t[8];

%}
 

%union{
	char collection[400];
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
%type <collection> factor term exp expression expression_list statement statements
%type <loc> factor term exp expression expression_list

%%

program		: function_list end_list 													{printf("\nli $v0,10\nsyscall\n");}

function_list 	: function_list function 
		| function

function	: DEF ID LP parameters RP COLON statements  ENDDEF 
		| DEF ID LP RP COLON statements ENDDEF 											{printf("\t.text\n%s\:\n\t.data\n %s_RA\: .word 0\n\t.text sw $ra,%s_RA\n", $2,$2,$2); }

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

assignment_stmt	: ID ASSIGN expression

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

exp		: exp ADD term 												  {$$.reg = $1.reg; $$.value = $1.value + $3.value;  printf("add $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); free_register($3.reg);}
		| exp MINUS term 											  {$$.reg = $1.reg; $$.value = $1.value - $3.value;  printf("sub $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); free_register($3.reg);}
		| term														  {$$.reg = $1.reg; $$.value = $1.value; strcpy($$.this_name, $1.this_name);}

term		: term MUL factor 										  {$$.value = $1.value * $3.value; $$.reg = $1.reg; printf("mul $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); free_register($3.reg);}
		| term DIV factor 											  {$$.value = $1.value / $3.value; $$.reg = $1.reg; printf("div $t%d,$t%d,$t%d\n", $$.reg, $$.reg, $3.reg); free_register($3.reg);}
		| factor													  {$$.reg = $1.reg; $$.value = $1.value; strcpy($$.this_name, $1.this_name);}

factor		: LP exp RP 
		| INTEGER                                                     {$$.reg = checkFreeIndex(); $$.value = $1; printf("li $t%d, %d\n", $$.reg, $1);}
		| STRING 													  {strcpy($$.this_name, $1); $$.is_string = 1;}
		| ID 
		| TRUE 
		| FALSE 
		| MINUS factor 
		| call_stmt

print_stmt	: PRINT LP expression_list RP							  {if ($3.is_string == 1) {printf("\n\t.data\nstr8\:\t.asciiz \"%s\"\n\t.text", $3.this_name);} else {printf("\nli $v0,1\n"); printf("move $a0,$t%d\nsyscall\n", $3.reg);}}

input_stmt	: ID ASSIGN INPUT LP RP

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
 
//int yyerror (char const *s) {
int yyerror(){
   //fprintf (stderr, "%s at line %d\n", s, yylineno);
   fprintf(stderr, "syntex error at line %d\n", yylineno);
   //return 0;
   exit(-1);
}


