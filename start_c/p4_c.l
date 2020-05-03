%{
#include <stdio.h>
#include <stdlib.h>
#include "p4.tab.h"

const char *token_err_msg = "lexical error at line %d\n";

%}

 /* regular definitions */
space [ \t]
number 0|[1-9][0-9]*
id [a-zA-Z_][a-zA-Z_0-9]*
string \"[^\"\n]*\"
comment "!"[^\n]*

%option never-interactive
%option yylineno
%%
 /* keywords */
def 	{ return(DEF); }
enddef 	{ return(ENDDEF); }
if 	{ return(IF); }
endif 	{ return(ENDIF); }
else 	{ return(ELSE); }
while 	{ return(WHILE); }
endwhile { return(ENDWHILE); }
print 	{ return(PRINT); }
input 	{ return(INPUT); }
true 	{ return(TRUE); }
false 	{ return(FALSE); }
return 	{ return(RETURN); }

 /* operators */
\+ 	{ return(ADD); }
-	{ return(MINUS); }
\* 	{ return(MUL); }
\/ 	{ return(DIV); }
== 	{ return(EQ); }
\< 	{ return(LT); }
\<= 	{ return(LE); }
\> 	{ return(GT); }
\>= 	{ return(GE); }
= 	{ return(ASSIGN); }
\<\> 	{ return(NE); }

 /* punctuations */
\( 	{ return(LP); }
\) 	{ return(RP); }
: 	{ return(COLON); }
, 	{ return(COMMA); }

{id}	{ strcpy(yylval.name, yytext); return(ID); }

{number} { yylval.value = atoi(yytext); return(INTEGER); } 
{string} { strcpy(yylval.name, yytext); return(STRING); }
{comment} { //return(COMMENT); 
		;
		}
[ |\t]  { ; }
\n	{ ; }

. 	{ //fprintf(stderr, "%s: line %d\n", token_err_msg, line_num); 
 	  fprintf(stderr, token_err_msg, yylineno); 
	  exit(-1);
	}

%%


