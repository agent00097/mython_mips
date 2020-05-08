/* A Bison parser, made by GNU Bison 3.5.3.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_P4_TAB_H_INCLUDED
# define YY_YY_P4_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ADD = 258,
    MINUS = 259,
    MUL = 260,
    DIV = 261,
    EQ = 262,
    LT = 263,
    LE = 264,
    GT = 265,
    GE = 266,
    ASSIGN = 267,
    NE = 268,
    DEF = 269,
    ENDDEF = 270,
    IF = 271,
    ENDIF = 272,
    ELSE = 273,
    WHILE = 274,
    ENDWHILE = 275,
    PRINT = 276,
    INPUT = 277,
    TRUE = 278,
    FALSE = 279,
    RETURN = 280,
    LP = 281,
    RP = 282,
    COLON = 283,
    COMMA = 284,
    COMMENT = 285,
    INTEGER = 286,
    STRING = 287,
    ID = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "p4_c.y"

	char id_name[30];
	char name[30];
	int value;
	struct {
		int reg;
		int value;
		char this_name[30];
		int is_string;
	} loc;

#line 103 "p4.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_P4_TAB_H_INCLUDED  */
