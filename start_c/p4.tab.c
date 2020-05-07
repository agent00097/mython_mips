/* A Bison parser, made by GNU Bison 3.5.3.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "p4_c.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;
//int yyerror(char dcdddonsdt *s);
int yyerror();
int yylex();
const char* pass_msg = "Input Passed Checking\n";
int semantic_error = 0;
char function_name[30];
char last_used[20];
int is_print;
int str;
int label;
int labels[15];
int stack_index;
int function_called;
int is_return;

//Functions_dused
char* lookup_char(char *name);

struct symbol_table {
	char id_name[30];
	int value;
	char string_value[30];
	int type;
} SymbolTable;

struct symbol_table *scope;


//Creating an array of sdTdcsd_regdisdtdeffrsdd thcat hfdolds int dvalue,t# is empty if it's 0 and 1 if it is occupied
int t[8];
int a[4];

#line 109 "p4.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 41 "p4_c.y"

	char id_name[30];
	char name[30];
	int value;
	struct {
		int reg;
		int value;
		char this_name[30];
		int is_string;
	} loc;

#line 207 "p4.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_P4_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  34
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  120

#define YYUNDEFTOK  2
#define YYMAXUTOK   288


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    66,    66,    68,    69,    71,    72,    73,    75,    77,
      78,    80,    81,    83,    84,    85,    86,    87,    88,    89,
      91,    93,    95,    97,    98,   100,   101,   102,   103,   104,
     105,   106,   108,   109,   110,   112,   113,   114,   116,   117,
     118,   119,   120,   121,   122,   123,   125,   127,   129,   131,
     133,   135,   136,   138,   140,   141,   143,   145,   147,   149,
     151,   152,   154,   155,   157,   158,   160,   161,   162
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ADD", "MINUS", "MUL", "DIV", "EQ", "LT",
  "LE", "GT", "GE", "ASSIGN", "NE", "DEF", "ENDDEF", "IF", "ENDIF", "ELSE",
  "WHILE", "ENDWHILE", "PRINT", "INPUT", "TRUE", "FALSE", "RETURN", "LP",
  "RP", "COLON", "COMMA", "COMMENT", "INTEGER", "STRING", "ID", "$accept",
  "program", "function_list", "headstart", "function_start", "function",
  "parameters", "statements", "statement", "headofid", "assignment_stmt",
  "return_stmt", "expression", "rel_exp", "exp", "term", "factor",
  "print_head", "comma_found", "print_stmt", "input_stmt", "id_lp",
  "call_stmt", "else_colon", "condition_stmt", "if_head", "while_head",
  "while_other_head", "while_stmt", "expression_list", "expr_list",
  "end_list", "end", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288
};
# endif

#define YYPACT_NINF (-37)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -11,     1,    13,    -5,   137,    16,   -37,   -37,   -37,    67,
      60,   -37,    41,    73,   -37,   -37,    26,   -37,     5,   -37,
      73,   -37,    88,   107,   -37,    57,   -37,   -37,   -37,   -37,
     -37,   -37,   137,    73,   137,   -37,    18,   -37,   -37,   -37,
      68,    88,   -37,   -37,    73,   -37,   -37,    74,   -37,   -37,
     164,     2,   -37,   -37,     6,    88,   -37,    72,    55,   -37,
      80,    72,   -37,   -37,   -37,   117,    89,    82,    90,   -37,
      58,    97,   -37,    98,    14,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,   -37,   -37,    73,    33,   -37,
      88,   -37,   -37,    99,   137,   -37,   -37,   -37,   101,    83,
     -37,   -37,   -37,     2,     2,    72,    72,    72,    72,    72,
      72,   -37,   -37,   -37,    72,   -37,   127,   -37,   -37,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     4,     7,     1,     0,
       0,     3,     0,     0,    67,    68,     0,    66,     2,    65,
       0,    57,     0,     0,    12,     0,    13,    19,    14,    15,
      18,    16,     0,     0,     0,    17,     0,    46,    20,    50,
       0,     0,    42,    43,     0,    39,    40,    41,    61,    23,
      24,    34,    37,    45,     0,     0,    51,    63,     0,    64,
       0,    22,     8,    11,    21,     0,     0,     0,     0,    10,
       0,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    47,     0,     0,    52,
       0,    56,    54,     0,     0,    58,    59,     6,     0,     0,
      49,    31,    38,    32,    33,    25,    27,    28,    29,    30,
      26,    35,    36,    60,    62,    53,     0,     5,     9,    55
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   -37,   -37,   -37,   -37,   128,   -37,   -20,   -21,    36,
     -37,   -37,   -14,    86,   -12,    34,   -36,   -37,   -37,    37,
      53,   -37,    -3,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   119
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,     5,     6,    70,    23,    24,    25,
      26,    27,    48,    49,    50,    51,    52,    13,    87,    28,
      29,    16,    53,    94,    31,    32,    33,    34,    35,    54,
      58,    18,    19
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      17,    30,    63,     1,    57,    72,    60,    83,    84,     1,
      61,    64,    65,     8,    67,    17,     9,    75,    76,    66,
      30,    77,    78,    79,    80,    81,     9,    82,    10,    30,
      41,    30,    74,    85,     7,    86,    75,    76,    10,    12,
      14,   102,    36,    88,    63,    68,    63,   111,   112,    42,
      43,    69,    55,    56,    12,    14,    15,    45,    46,    47,
     102,    41,    30,    40,    30,   105,   106,   107,   108,   109,
     110,    15,    38,   113,   116,    75,    76,    41,   114,    40,
      42,    43,    89,    44,    90,    98,    39,    99,    45,    46,
      47,    30,    41,    37,    71,    63,    42,    43,    20,    44,
      39,    21,    96,     9,    45,    46,    47,    22,    91,   103,
     104,    42,    43,    30,    55,    10,   118,    95,    97,    45,
      46,    47,    62,    20,   100,   101,    21,   115,     9,   117,
      73,    11,    22,    20,    92,    93,    21,    59,     9,     0,
      10,     0,    22,    20,   119,     0,    21,     0,     9,     0,
      10,     0,    22,    20,     0,     0,    21,     0,     9,     0,
      10,     0,    22,     0,     0,     0,     0,    75,    76,     0,
      10,    77,    78,    79,    80,    81,     0,    82
};

static const yytype_int8 yycheck[] =
{
       3,     4,    23,    14,    16,    41,    20,     5,     6,    14,
      22,    25,    32,     0,    34,    18,    21,     3,     4,    33,
      23,     7,     8,     9,    10,    11,    21,    13,    33,    32,
       4,    34,    44,    27,    33,    29,     3,     4,    33,     3,
       3,    27,    26,    55,    65,    27,    67,    83,    84,    23,
      24,    33,    26,    27,    18,    18,     3,    31,    32,    33,
      27,     4,    65,    22,    67,    77,    78,    79,    80,    81,
      82,    18,    12,    87,    94,     3,     4,     4,    90,    22,
      23,    24,    27,    26,    29,    27,    26,    29,    31,    32,
      33,    94,     4,    26,    26,   116,    23,    24,    16,    26,
      26,    19,    20,    21,    31,    32,    33,    25,    28,    75,
      76,    23,    24,   116,    26,    33,    33,    28,    28,    31,
      32,    33,    15,    16,    27,    27,    19,    28,    21,    28,
      44,     3,    25,    16,    17,    18,    19,    18,    21,    -1,
      33,    -1,    25,    16,    17,    -1,    19,    -1,    21,    -1,
      33,    -1,    25,    16,    -1,    -1,    19,    -1,    21,    -1,
      33,    -1,    25,    -1,    -1,    -1,    -1,     3,     4,    -1,
      33,     7,     8,     9,    10,    11,    -1,    13
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    14,    35,    36,    37,    38,    39,    33,     0,    21,
      33,    39,    43,    51,    53,    54,    55,    56,    65,    66,
      16,    19,    25,    41,    42,    43,    44,    45,    53,    54,
      56,    58,    59,    60,    61,    62,    26,    26,    12,    26,
      22,     4,    23,    24,    26,    31,    32,    33,    46,    47,
      48,    49,    50,    56,    63,    26,    27,    48,    64,    66,
      46,    48,    15,    42,    46,    41,    46,    41,    27,    33,
      40,    26,    50,    47,    48,     3,     4,     7,     8,     9,
      10,    11,    13,     5,     6,    27,    29,    52,    48,    27,
      29,    28,    17,    18,    57,    28,    20,    28,    27,    29,
      27,    27,    27,    49,    49,    48,    48,    48,    48,    48,
      48,    50,    50,    46,    48,    28,    41,    28,    33,    17
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    34,    35,    36,    36,    37,    37,    38,    39,    40,
      40,    41,    41,    42,    42,    42,    42,    42,    42,    42,
      43,    44,    45,    46,    46,    47,    47,    47,    47,    47,
      47,    47,    48,    48,    48,    49,    49,    49,    50,    50,
      50,    50,    50,    50,    50,    50,    51,    52,    53,    54,
      55,    56,    56,    57,    58,    58,    59,    60,    61,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    66
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     1,     5,     4,     2,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     3,     4,
       2,     2,     3,     2,     3,     5,     3,     1,     3,     3,
       3,     1,     3,     1,     2,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 66 "p4_c.y"
                                                                                                                                                {printf("\nli $v0,10\nsyscall\n");}
#line 1475 "p4.tab.c"
    break;

  case 4:
#line 69 "p4_c.y"
                                                                                                                                                                        {printf("\n\t.globl main\n\t.data\n\t.align 2\n\nmain_registers\: .space 48\n\t.text\n\nmain\:\n\n");}
#line 1481 "p4.tab.c"
    break;

  case 5:
#line 71 "p4_c.y"
                                                                                                                                        {printf("\t.text\n sw $ra,%s_RA\n\n", function_name);print_all_scope();}
#line 1487 "p4.tab.c"
    break;

  case 6:
#line 72 "p4_c.y"
                                                                                                                                                {printf("\t.text\n sw $ra,%s_RA\n\n", function_name);}
#line 1493 "p4.tab.c"
    break;

  case 7:
#line 73 "p4_c.y"
                                                                                                                                                        {printf("\t.text\n%s\:\n\t.data\n %s_RA\: .word 0\n", (yyvsp[0].name),(yyvsp[0].name)); strcpy(function_name, (yyvsp[0].name));}
#line 1499 "p4.tab.c"
    break;

  case 8:
#line 75 "p4_c.y"
                                                                                                                                        {if(is_return == 1){free_all_registers();sprintf(last_used, "$t%d", checkFreeIndex());printf("\tmove $v0,%s\n", last_used);printf("\tlw %s,%s_RA", last_used , function_name); printf("\n\tjr %s\n", last_used); free_all_registers();}else{free_all_registers();sprintf(last_used, "$t%d", checkFreeIndex());printf("\tlw %s,%s_RA", last_used , function_name); printf("\n\tjr %s\n", last_used); free_all_registers();}}
#line 1505 "p4.tab.c"
    break;

  case 9:
#line 77 "p4_c.y"
                                                                                                                                                {printf(" %s_%s\:   .word 0\n",function_name,(yyvsp[0].name)); add_in_scope((yyvsp[0].name), "", 2, 0);}
#line 1511 "p4.tab.c"
    break;

  case 10:
#line 78 "p4_c.y"
                                                                                                                                                                        {printf(" %s_%s\:   .word 0\n",function_name,(yyvsp[0].name)); add_in_scope((yyvsp[0].name), "", 2, 0);}
#line 1517 "p4.tab.c"
    break;

  case 20:
#line 91 "p4_c.y"
                                                                                                                          {if(itExists((yyvsp[-1].name)) == 1) {printf("\t.data\n\t.align 2\n%s_%s\: .word 0\n\t.text\n", function_name, (yyvsp[-1].name)); strcpy((yyval.id_name), (yyvsp[-1].name));}}
#line 1523 "p4.tab.c"
    break;

  case 21:
#line 93 "p4_c.y"
                                                                                                  {printf("sw %s,%s_%s\n\n", last_used, function_name, (yyvsp[-1].id_name)); free_all_registers(); add_in_scope((yyvsp[-1].id_name),(yyvsp[0].loc).this_name,(yyvsp[0].loc).is_string,(yyvsp[0].loc).value);}
#line 1529 "p4.tab.c"
    break;

  case 22:
#line 95 "p4_c.y"
                                                                                                                  {is_return = 1;}
#line 1535 "p4.tab.c"
    break;

  case 23:
#line 97 "p4_c.y"
                                                                                                                      {(yyval.loc).reg = (yyvsp[0].loc).reg;}
#line 1541 "p4.tab.c"
    break;

  case 24:
#line 98 "p4_c.y"
                                                                                                                              {(yyval.loc).reg = (yyvsp[0].loc).reg; (yyval.loc).value = (yyvsp[0].loc).value; strcpy((yyval.loc).this_name, (yyvsp[0].loc).this_name); (yyval.loc).is_string = (yyvsp[0].loc).is_string;}
#line 1547 "p4.tab.c"
    break;

  case 27:
#line 102 "p4_c.y"
                                                                                                                          {(yyval.loc).reg = (yyvsp[-2].loc).reg; printf("slt $t%d,$t%d,$t%d\n", (yyvsp[-2].loc).reg,(yyvsp[-2].loc).reg,(yyvsp[0].loc).reg);free_register((yyvsp[0].loc).reg);free_register((yyval.loc).reg);}
#line 1553 "p4.tab.c"
    break;

  case 29:
#line 104 "p4_c.y"
                                                                                                                          {(yyval.loc).reg = (yyvsp[-2].loc).reg; printf("sgt $t%d,$t%d,$t%d\n", (yyvsp[-2].loc).reg,(yyvsp[-2].loc).reg,(yyvsp[0].loc).reg);free_register((yyvsp[0].loc).reg);free_register((yyval.loc).reg);}
#line 1559 "p4.tab.c"
    break;

  case 32:
#line 108 "p4_c.y"
                                                                                                                          {(yyval.loc).reg = (yyvsp[-2].loc).reg; (yyval.loc).value = (yyvsp[-2].loc).value + (yyvsp[0].loc).value;  printf("add $t%d,$t%d,$t%d\n", (yyval.loc).reg, (yyval.loc).reg, (yyvsp[0].loc).reg); sprintf(last_used, "$t%d", (yyval.loc).reg);free_register((yyvsp[0].loc).reg);}
#line 1565 "p4.tab.c"
    break;

  case 33:
#line 109 "p4_c.y"
                                                                                                                          {(yyval.loc).reg = (yyvsp[-2].loc).reg; (yyval.loc).value = (yyvsp[-2].loc).value - (yyvsp[0].loc).value;  printf("sub $t%d,$t%d,$t%d\n", (yyval.loc).reg, (yyval.loc).reg, (yyvsp[0].loc).reg); sprintf(last_used, "$t%d", (yyval.loc).reg);free_register((yyvsp[0].loc).reg);}
#line 1571 "p4.tab.c"
    break;

  case 34:
#line 110 "p4_c.y"
                                                                                                                                  {(yyval.loc).reg = (yyvsp[0].loc).reg; (yyval.loc).value = (yyvsp[0].loc).value; strcpy((yyval.loc).this_name, (yyvsp[0].loc).this_name); (yyval.loc).is_string = (yyvsp[0].loc).is_string;}
#line 1577 "p4.tab.c"
    break;

  case 35:
#line 112 "p4_c.y"
                                                                                                                  {(yyval.loc).value = (yyvsp[-2].loc).value * (yyvsp[0].loc).value; (yyval.loc).reg = (yyvsp[-2].loc).reg; printf("mul $t%d,$t%d,$t%d\n", (yyval.loc).reg, (yyval.loc).reg, (yyvsp[0].loc).reg); sprintf(last_used, "$t%d", (yyval.loc).reg); free_register((yyvsp[0].loc).reg);}
#line 1583 "p4.tab.c"
    break;

  case 36:
#line 113 "p4_c.y"
                                                                                                                          {(yyval.loc).value = (yyvsp[-2].loc).value / (yyvsp[0].loc).value; (yyval.loc).reg = (yyvsp[-2].loc).reg; printf("div $t%d,$t%d,$t%d\n", (yyval.loc).reg, (yyval.loc).reg, (yyvsp[0].loc).reg); sprintf(last_used, "$t%d", (yyval.loc).reg); free_register((yyvsp[0].loc).reg);}
#line 1589 "p4.tab.c"
    break;

  case 37:
#line 114 "p4_c.y"
                                                                                                                                  {(yyval.loc).reg = (yyvsp[0].loc).reg; (yyval.loc).value = (yyvsp[0].loc).value; strcpy((yyval.loc).this_name, (yyvsp[0].loc).this_name); (yyval.loc).is_string = (yyvsp[0].loc).is_string;}
#line 1595 "p4.tab.c"
    break;

  case 39:
#line 117 "p4_c.y"
                                                                              {(yyval.loc).reg = checkFreeIndex(); (yyval.loc).value = (yyvsp[0].value); printf("li $t%d, %d\n", (yyval.loc).reg, (yyvsp[0].value)); sprintf(last_used, "$t%d", (yyval.loc).reg); if(function_called == 1){printf("move $a%d, $t%d\n",checkFreeIndexA(),(yyval.loc).reg); free_all_registers();}}
#line 1601 "p4.tab.c"
    break;

  case 40:
#line 118 "p4_c.y"
                                                                                                                                  {(yyval.loc).reg = checkFreeIndex();strcpy((yyval.loc).this_name, (yyvsp[0].name)); (yyval.loc).is_string = 1; printf("\t.data\nSTR%d\:\t.asciiz %s\n\t.text\n",checkFreeStr(), (yyvsp[0].name)); str++;sprintf(last_used, "$t%d", (yyval.loc).reg);printf("la $t%d,STR%d\n",(yyval.loc).reg,str-1);}
#line 1607 "p4.tab.c"
    break;

  case 41:
#line 119 "p4_c.y"
                                                                                                                                  {(yyval.loc).reg = checkFreeIndex();(yyval.loc).is_string = lookup_type((yyvsp[0].name)); if(lookup_type((yyvsp[0].name)) == 1) {strcpy((yyval.loc).this_name, lookup_char((yyvsp[0].name)));} else {(yyval.loc).value = lookup_int((yyvsp[0].name));} sprintf(last_used,"$t%d", (yyval.loc).reg);printf("lw %s, %s_%s\n", last_used, function_name, (yyvsp[0].name));}
#line 1613 "p4.tab.c"
    break;

  case 44:
#line 122 "p4_c.y"
                                                                                                                          {printf("neg $t%d,$t%d\n", (yyvsp[0].loc).reg, (yyvsp[0].loc).reg);}
#line 1619 "p4.tab.c"
    break;

  case 46:
#line 125 "p4_c.y"
                                                                                                                          {is_print = 1;}
#line 1625 "p4.tab.c"
    break;

  case 49:
#line 131 "p4_c.y"
                                                                                                          {printf("li $v0,5\nsyscall\n"); sprintf(last_used, "$v0"); printf("sw %s,%s_%s\n", last_used, function_name, (yyvsp[-3].id_name));}
#line 1631 "p4.tab.c"
    break;

  case 50:
#line 133 "p4_c.y"
                                                                                                                          {freeTregisters();freeAregisters(); function_called = 1; strcpy((yyval.name),(yyvsp[-1].name));}
#line 1637 "p4.tab.c"
    break;

  case 51:
#line 135 "p4_c.y"
                                                                                                                          {printf("jal %s\n", (yyvsp[-1].name));freeLWTregisters();freeLWAregisters();free_all_registers();free_all_registers_a();}
#line 1643 "p4.tab.c"
    break;

  case 52:
#line 136 "p4_c.y"
                                                                                                                  {printf("jal %s\n", (yyvsp[-2].name));freeLWTregisters();freeLWAregisters(); printf("move $t0,$v0\n");free_all_registers();free_all_registers_a();}
#line 1649 "p4.tab.c"
    break;

  case 53:
#line 138 "p4_c.y"
                                                                                                                  {printf("\nb L%d\nL%d\:\n\t",labels[stack_index], labels[stack_index-1]);}
#line 1655 "p4.tab.c"
    break;

  case 55:
#line 141 "p4_c.y"
                                                                                          {printf("\nL%d\:\n\t", labels[stack_index]);popTwoOnStack();}
#line 1661 "p4.tab.c"
    break;

  case 56:
#line 143 "p4_c.y"
                                                                                                         {label+=2;pushTwoOnStack();printf("beqz $t%d,L%d\n", (yyvsp[-1].loc).reg, labels[stack_index-1]);}
#line 1667 "p4.tab.c"
    break;

  case 57:
#line 145 "p4_c.y"
                                                                                                                         {label+=2;pushTwoOnStack();printf("L%d\:\t",labels[stack_index-1]);}
#line 1673 "p4.tab.c"
    break;

  case 58:
#line 147 "p4_c.y"
                                                                                         {printf("beqz $t%d,L%d\n",(yyvsp[-1].loc).reg,labels[stack_index]);}
#line 1679 "p4.tab.c"
    break;

  case 59:
#line 149 "p4_c.y"
                                                                                         {printf("b L%d\nL%d\:\n",labels[stack_index-1],labels[stack_index]); popTwoOnStack();}
#line 1685 "p4.tab.c"
    break;

  case 60:
#line 151 "p4_c.y"
                                                                                 {if(is_print == 1) {if((yyvsp[0].loc).is_string == 1){printf("li $v0,4\nmove $a0,%s\nsyscall\n",last_used); free_all_registers();} else {printf("li $v0,1\nmove $a0,%s\nsyscall\n", last_used); free_all_registers();}}}
#line 1691 "p4.tab.c"
    break;

  case 61:
#line 152 "p4_c.y"
                                                                                                                         {(yyval.loc).reg = (yyvsp[0].loc).reg; (yyval.loc).value = (yyvsp[0].loc).value; strcpy((yyval.loc).this_name, (yyvsp[0].loc).this_name); if(is_print == 1) {if((yyvsp[0].loc).is_string != 1){printf("li $v0,1\nmove $a0,%s\nsyscall\n", last_used); free_all_registers();} else {printf("li $v0,4\nmove $a0,%s\nsyscall\n", last_used); free_all_registers();}} free_all_registers();}
#line 1697 "p4.tab.c"
    break;


#line 1701 "p4.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 164 "p4_c.y"


int checkFreeStr() {
	return str;
}

int checkFreeIndex() {
	for(int i = 0 ; i < 8 ; i++) {
		if(t[i] == 0) {
			t[i] = 1;
			return i;
		}
	}
}

checkFreeIndexA() {
	for(int i = 0 ; i < 8 ; i++) {
		if(a[i] == 0) {
			a[i] = 1;
			return i;
		}
	}
}

void print_all_scope() {
	int i = 0;
	int a = 0;
	for(i = 0; i < 20; i++) {
		
		if(strcmp(scope[i].id_name,"") == 0) {
			return;
		}
		printf("sw $a%d,%s_%s\n",a,function_name,scope[i].id_name);
		a++;
	}
}

int itExists(char *name) {
	// printf("What I am looking for is : %s\n", name);
	for(int i = 0; i < 20; i++) {
		// printf("Entry %d : %s\n", i, scope[i].id_name);
		if(strcmp(scope[i].id_name,name) == 0) {
			// printf("What the fuck, it exists!\n");
			//We found thed ID
			return 0;
		}
	}
	return 1;
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

void free_all_registers_a() {
	int i = 0;
	for(i = 0; i < 4; i++) {
		a[i] = 0;
	}
}

int main() {
	 //Code for debugging
    #if YYDEBUG == 1
    extern int yydebug;
    yydebug = 1;
    #endif
	is_return = 0;
	stack_index = -1;
	scope = malloc(20 * sizeof * scope);
	for(int i = 0; i < 15; i++) {
		labels[i] = 0;
	}
	str = 0;
	label = -1;
	function_called = 0;
   yyparse();
   if (!semantic_error){
	fprintf(stderr, "%s", pass_msg);
   }
   return 0;
}

void addTwoOnLabel() {
	label += 2;
}

void add_in_scope(char* id, char* str_value, int type, int value) {
	for(int i = 0; i < 20; i++) {
		if(strcmp(scope[i].id_name,"") == 0) {
			strcpy(scope[i].id_name, id);
			strcpy(scope[i].string_value, str_value);
			scope[i].type = type;
			scope[i].value = value;
			return;
		}
	}
}

int lookup_type(char* name) {
	for(int i = 0; i < 20; i++) {
		if(strcmp(scope[i].id_name,name)) {
			//We found the ID
			return scope[i].type;
		}
	}
}

int checkFreeLabel() {
	label++;
	return label-1;
}

char* lookup_char(char *name) {
	for(int i = 0; i < 20; i++) {
		if(strcmp(scope[i].id_name,name)) {
			//We found the ID
			return scope[i].string_value;
		}
	}
}

int lookup_int(char *name) {
	for(int i = 0; i < 20; i++) {
		if(strcmp(scope[i].id_name,name)) {
			//We found the ID
			return scope[i].value;
		}
	}
}
 

pushTwoOnStack() {
	int i = 0;
	for(i = 0; i < 15; i++) {
		if(labels[i] == 0) {
			labels[i] = label;
			labels[i+1] = label+1;
			stack_index += 2;
			return;
		}
	}
} 

popTwoOnStack() {
	int i = 0;
	for(i = 0; i < 15; i++) {
		if(labels[i] == 0) {
			labels[i-1] = 0;
			labels[i-2] = 0;
			stack_index -= 2;
			return;
		}
	}
}

//int yyerror (char const *s) {
int yyerror(){
   //fprintf (stderr, "%s at line %d\n", s, yylineno);
   fprintf(stderr, "syntex error at line %d\n", yylineno);
   //return 0;
   exit(-1);
}

void freeTregisters() {
	printf("sw $t0, main_registers\n");
	int i = 1;
	int x = 4;
	for(i = 1; i < 7; i++) {
		printf("sw $t%d, main_registers+%d\n",i, x);
		x += 4;
	}
}

void freeLWTregisters() {
	printf("lw $t0, main_registers\n");
	int i = 1;
	int x = 4;
	for(i = 1; i < 7; i++) {
		printf("lw $t%d, main_registers+%d\n",i, x);
		x += 4;
	}
}

void freeAregisters() {
	int i = 0;
	int x = 32;
	for(i = 0; i < 4; i++) {
		printf("sw $a%d, main_registers+%d\n", i, x);
		x += 4;
	}
}

void freeLWAregisters() {
	int i = 0;
	int x = 32;
	for(i = 0; i < 4; i++) {
		printf("lw $a%d, main_registers+%d\n", i, x);
		x += 4;
	}
}
