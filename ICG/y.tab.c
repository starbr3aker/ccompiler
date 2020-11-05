
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\file.y"

	#include <stdio.h>
	#include <string.h>
	#include <stdlib.h>

	void yyerror(char* s);
	int yylex();
	void ins();
	void insV();
	int flag=0;
	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];
	extern int currnest;
	extern int arrbrackets;
	extern int totbrackets;
	int getbrackets(char* );
	void setbrackets(char*, int);
	void deletedata (int );
	int checkscope(char*);
	int check_id_is_func(char *);
	void insertST(char*, char*);
	void insertSTnest(char*, int);
	void insertSTparamscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int check_params_type(char *str, char types[100][100], int n);
	void insertSTparamstype(char *, char *);
	char *gettypestr(char *);
	int duplicate(char *s);
	int checkarray(char*);
	char currfunctype[100];
	char currfunc[100];
	char currfunccall[100];
	void insertSTF(char*);
	char gettype(char*,int);
	char getfirst(char*);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa(int num, char* str, int base);
	void reverse(char str[], int length);
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void genunary();
	void codegencon();
	void funcgen();
	void funcgenend();
	void arggen();
	void callgen();

	int params_count=0;
	int call_params_count=0;
	char call_params_types[100][100];
	int top = 0,count=0,ltop=0,lno=0;
	char temp[3] = "t";


/* Line 189 of yacc.c  */
#line 139 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONG = 263,
     SHORT = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     STRUCT = 267,
     RETURN = 268,
     MAIN = 269,
     VOID = 270,
     WHILE = 271,
     FOR = 272,
     DO = 273,
     BREAK = 274,
     ENDIF = 275,
     identifier = 276,
     array_identifier = 277,
     func_identifier = 278,
     integer_constant = 279,
     string_constant = 280,
     float_constant = 281,
     character_constant = 282,
     ELSE = 283,
     rightshift_assignment_operator = 284,
     leftshift_assignment_operator = 285,
     OR_assignment_operator = 286,
     XOR_assignment_operator = 287,
     modulo_assignment_operator = 288,
     AND_assignment_operator = 289,
     division_assignment_operator = 290,
     multiplication_assignment_operator = 291,
     subtraction_assignment_operator = 292,
     addition_assignment_operator = 293,
     assignment_operator = 294,
     OR_operator = 295,
     AND_operator = 296,
     pipe_operator = 297,
     caret_operator = 298,
     amp_operator = 299,
     inequality_operator = 300,
     equality_operator = 301,
     greaterthan_operator = 302,
     greaterthan_assignment_operator = 303,
     lessthan_operator = 304,
     lessthan_assignment_operator = 305,
     rightshift_operator = 306,
     leftshift_operator = 307,
     subtract_operator = 308,
     add_operator = 309,
     modulo_operator = 310,
     division_operator = 311,
     multiplication_operator = 312,
     SIZEOF = 313,
     exclamation_operator = 314,
     tilde_operator = 315,
     decrement_operator = 316,
     increment_operator = 317
   };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define ENDIF 275
#define identifier 276
#define array_identifier 277
#define func_identifier 278
#define integer_constant 279
#define string_constant 280
#define float_constant 281
#define character_constant 282
#define ELSE 283
#define rightshift_assignment_operator 284
#define leftshift_assignment_operator 285
#define OR_assignment_operator 286
#define XOR_assignment_operator 287
#define modulo_assignment_operator 288
#define AND_assignment_operator 289
#define division_assignment_operator 290
#define multiplication_assignment_operator 291
#define subtraction_assignment_operator 292
#define addition_assignment_operator 293
#define assignment_operator 294
#define OR_operator 295
#define AND_operator 296
#define pipe_operator 297
#define caret_operator 298
#define amp_operator 299
#define inequality_operator 300
#define equality_operator 301
#define greaterthan_operator 302
#define greaterthan_assignment_operator 303
#define lessthan_operator 304
#define lessthan_assignment_operator 305
#define rightshift_operator 306
#define leftshift_operator 307
#define subtract_operator 308
#define add_operator 309
#define modulo_operator 310
#define division_operator 311
#define multiplication_operator 312
#define SIZEOF 313
#define exclamation_operator 314
#define tilde_operator 315
#define decrement_operator 316
#define increment_operator 317




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 305 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      67,    68,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    63,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    11,    13,    15,    19,
      23,    25,    26,    30,    31,    35,    37,    40,    43,    44,
      45,    50,    51,    57,    60,    62,    64,    65,    67,    69,
      71,    73,    76,    79,    82,    85,    87,    89,    92,    95,
      96,    98,   101,   104,   105,   107,   108,   110,   111,   114,
     118,   119,   120,   126,   128,   129,   130,   134,   137,   140,
     141,   142,   146,   149,   150,   152,   154,   156,   158,   160,
     162,   164,   165,   170,   173,   174,   177,   179,   180,   181,
     190,   193,   194,   195,   196,   204,   205,   206,   218,   219,
     220,   230,   233,   237,   240,   243,   248,   251,   254,   255,
     256,   261,   262,   267,   268,   273,   274,   279,   280,   285,
     286,   291,   294,   297,   299,   300,   305,   307,   308,   313,
     315,   316,   320,   322,   326,   328,   330,   332,   334,   336,
     338,   340,   344,   346,   348,   350,   354,   356,   358,   360,
     362,   364,   366,   368,   369,   370,   375,   376,   382,   386,
     390,   392,   394,   395,   401,   403,   404,   408,   410,   412,
     414,   416,   418,   420,   422,   424,   426
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      72,     0,    -1,    73,    -1,    75,    74,    -1,    73,    -1,
      -1,    76,    -1,    92,    -1,    87,    77,    63,    -1,    77,
      64,    78,    -1,    78,    -1,    -1,    21,    79,    81,    -1,
      -1,    22,    80,    81,    -1,    82,    -1,    39,   134,    -1,
      65,    83,    -1,    -1,    -1,    24,    66,    84,    86,    -1,
      -1,    24,    66,    85,    65,    83,    -1,    66,   123,    -1,
     123,    -1,   124,    -1,    -1,     4,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    90,    -1,     9,    91,    -1,    11,
      88,    -1,    10,    89,    -1,    15,    -1,     4,    -1,     8,
      90,    -1,     9,    91,    -1,    -1,     4,    -1,     8,    90,
      -1,     9,    91,    -1,    -1,     4,    -1,    -1,     4,    -1,
      -1,    93,    94,    -1,    87,    21,    67,    -1,    -1,    -1,
      95,    97,    68,    96,   105,    -1,    98,    -1,    -1,    -1,
      87,    99,   100,    -1,   102,   101,    -1,    64,    98,    -1,
      -1,    -1,    21,   103,   104,    -1,    65,    66,    -1,    -1,
     109,    -1,   106,    -1,   110,    -1,   114,    -1,   121,    -1,
     122,    -1,    76,    -1,    -1,   107,    69,   108,    70,    -1,
     105,   108,    -1,    -1,   127,    63,    -1,    63,    -1,    -1,
      -1,     3,    67,   134,    68,   111,   105,   112,   113,    -1,
      28,   105,    -1,    -1,    -1,    -1,    16,    67,   115,   134,
      68,   116,   105,    -1,    -1,    -1,    17,    67,   127,    63,
     117,   134,    63,   118,   127,    68,   105,    -1,    -1,    -1,
     119,    18,   105,    16,    67,   134,    68,   120,    63,    -1,
      13,    63,    -1,    13,   127,    63,    -1,    19,    63,    -1,
      39,    25,    -1,    39,    69,   125,    70,    -1,    24,   126,
      -1,    64,   125,    -1,    -1,    -1,   147,    39,   128,   127,
      -1,    -1,   147,    38,   129,   127,    -1,    -1,   147,    37,
     130,   127,    -1,    -1,   147,    36,   131,   127,    -1,    -1,
     147,    35,   132,   127,    -1,    -1,   147,    33,   133,   127,
      -1,   147,    62,    -1,   147,    61,    -1,   134,    -1,    -1,
     134,    40,   136,   135,    -1,   136,    -1,    -1,   136,    41,
     137,   138,    -1,   138,    -1,    -1,    59,   139,   138,    -1,
     140,    -1,   140,   141,   142,    -1,   142,    -1,    48,    -1,
      50,    -1,    47,    -1,    49,    -1,    46,    -1,    45,    -1,
     142,   143,   144,    -1,   144,    -1,    54,    -1,    53,    -1,
     144,   145,   146,    -1,   146,    -1,    57,    -1,    56,    -1,
      55,    -1,   152,    -1,   147,    -1,    21,    -1,    -1,    -1,
      22,   148,   149,   150,    -1,    -1,    65,   127,    66,   151,
     150,    -1,    65,   127,    66,    -1,    67,   127,    68,    -1,
     153,    -1,   158,    -1,    -1,    21,    67,   154,   155,    68,
      -1,   156,    -1,    -1,   156,    64,   157,    -1,   157,    -1,
      21,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   107,   107,   110,   113,   114,   117,   118,   121,   124,
     124,   127,   127,   128,   128,   132,   132,   135,   136,   139,
     139,   140,   140,   141,   144,   145,   146,   149,   149,   149,
     149,   150,   151,   152,   153,   154,   157,   157,   157,   157,
     160,   160,   160,   160,   163,   163,   166,   166,   169,   172,
     175,   175,   175,   178,   178,   181,   181,   184,   187,   188,
     191,   191,   194,   195,   198,   198,   199,   199,   200,   200,
     201,   204,   204,   207,   208,   211,   212,   215,   215,   215,
     218,   219,   222,   222,   222,   223,   223,   223,   224,   224,
     224,   226,   227,   240,   243,   246,   249,   252,   253,   256,
     256,   265,   265,   272,   272,   279,   279,   286,   286,   292,
     292,   299,   300,   301,   305,   305,   306,   309,   309,   310,
     314,   314,   315,   318,   319,   322,   322,   322,   322,   322,
     322,   325,   326,   329,   330,   333,   334,   337,   337,   337,
     340,   341,   344,   357,   358,   357,   365,   365,   366,   374,
     375,   376,   379,   379,   428,   428,   431,   432,   434,   444,
     454,   464,   474,   486,   487,   488,   489
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "identifier",
  "array_identifier", "func_identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "rightshift_assignment_operator", "leftshift_assignment_operator",
  "OR_assignment_operator", "XOR_assignment_operator",
  "modulo_assignment_operator", "AND_assignment_operator",
  "division_assignment_operator", "multiplication_assignment_operator",
  "subtraction_assignment_operator", "addition_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "inequality_operator",
  "equality_operator", "greaterthan_operator",
  "greaterthan_assignment_operator", "lessthan_operator",
  "lessthan_assignment_operator", "rightshift_operator",
  "leftshift_operator", "subtract_operator", "add_operator",
  "modulo_operator", "division_operator", "multiplication_operator",
  "SIZEOF", "exclamation_operator", "tilde_operator", "decrement_operator",
  "increment_operator", "';'", "','", "'['", "']'", "'('", "')'", "'{'",
  "'}'", "$accept", "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "$@3", "$@4",
  "initilization", "type_specifier", "unsigned_grammar", "signed_grammar",
  "long_grammar", "short_grammar", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "$@5", "$@6", "params", "parameters_list", "$@7",
  "parameters_identifier_list", "parameters_identifier_list_breakup",
  "param_identifier", "$@8", "param_identifier_breakup", "statement",
  "compound_statement", "$@9", "statment_list", "expression_statment",
  "conditional_statements", "$@10", "$@11",
  "conditional_statements_breakup", "iterative_statements", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "return_statement", "break_statement",
  "string_initilization", "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "$@18", "$@19", "$@20",
  "$@21", "$@22", "@23", "simple_expression", "$@24", "and_expression",
  "@25", "unary_relation_expression", "@26", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@27", "@28", "bracketlist", "$@29",
  "immutable", "call", "@30", "arguments", "arguments_list", "exp",
  "constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    59,    44,    91,    93,    40,    41,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    76,    77,
      77,    79,    78,    80,    78,    81,    81,    82,    82,    84,
      83,    85,    83,    83,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    88,    88,
      89,    89,    89,    89,    90,    90,    91,    91,    92,    93,
      95,    96,    94,    97,    97,    99,    98,   100,   101,   101,
     103,   102,   104,   104,   105,   105,   105,   105,   105,   105,
     105,   107,   106,   108,   108,   109,   109,   111,   112,   110,
     113,   113,   115,   116,   114,   117,   118,   114,   119,   120,
     114,   121,   121,   122,   123,   124,   125,   126,   126,   128,
     127,   129,   127,   130,   127,   131,   127,   132,   127,   133,
     127,   127,   127,   127,   135,   134,   134,   137,   136,   136,
     139,   138,   138,   140,   140,   141,   141,   141,   141,   141,
     141,   142,   142,   143,   143,   144,   144,   145,   145,   145,
     146,   146,   147,   148,   149,   147,   151,   150,   150,   152,
     152,   152,   154,   153,   155,   155,   156,   156,   157,   157,
     157,   157,   157,   158,   158,   158,   158
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     0,
       4,     0,     5,     2,     1,     1,     0,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     2,     2,     0,
       1,     2,     2,     0,     1,     0,     1,     0,     2,     3,
       0,     0,     5,     1,     0,     0,     3,     2,     2,     0,
       0,     3,     2,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     4,     2,     0,     2,     1,     0,     0,     8,
       2,     0,     0,     0,     7,     0,     0,    11,     0,     0,
       9,     2,     3,     2,     2,     4,     2,     2,     0,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     2,     2,     1,     0,     4,     1,     0,     4,     1,
       0,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     0,     0,     4,     0,     5,     3,     3,
       1,     1,     0,     5,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    27,    28,    29,    30,    45,    47,    43,    39,    35,
       0,     2,     5,     6,     0,     7,    50,    44,    31,    46,
      32,    40,    45,    47,    34,    36,    45,    47,    33,     1,
       4,     3,    11,    13,     0,    10,    48,    54,    41,    42,
      37,    38,    49,    18,    18,     8,     0,    55,     0,    53,
       0,     0,    12,    15,    14,    11,     9,     0,    51,   142,
     143,   163,   164,   165,   166,   120,     0,    16,   116,   119,
     122,   124,   132,   136,   141,   140,   150,   151,     0,     0,
      17,    60,    56,    59,    71,   152,   144,     0,     0,   113,
     141,     0,   117,   130,   129,   127,   125,   128,   126,     0,
     134,   133,     0,   139,   138,   137,     0,    19,     0,    23,
      63,     0,    57,     0,     0,     0,     0,     0,    76,    70,
       0,    52,    65,     0,    64,    66,    67,     0,    68,    69,
       0,   155,     0,   121,   149,   109,   107,   105,   103,   101,
      99,   112,   111,   114,     0,   123,   131,   135,    26,     0,
      94,     0,    61,    58,     0,    91,     0,    82,     0,    93,
      71,    71,    75,   158,   159,   160,   161,   162,     0,   154,
     157,     0,   145,     0,     0,     0,     0,     0,     0,   115,
     118,     0,    20,    24,    25,     0,    62,     0,    92,     0,
       0,    71,     0,     0,   153,     0,     0,   110,   108,   106,
     104,   102,   100,     0,    22,    77,     0,    85,    73,    72,
       0,   156,   148,    98,     0,    71,    83,     0,     0,     0,
       0,    96,    95,    78,    71,     0,     0,   147,    97,    81,
      84,    86,    89,    71,    79,     0,     0,    80,     0,    90,
      71,    87
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    31,    12,   119,    34,    35,    43,    44,
      52,    53,    80,   148,   149,   182,   120,    28,    24,    18,
      20,    15,    16,    36,    37,    84,    48,    49,    57,    82,
     112,    83,   110,   152,   191,   122,   123,   192,   124,   125,
     215,   229,   234,   126,   189,   224,   217,   235,   127,   236,
     128,   129,   109,   184,   214,   221,   130,   178,   177,   176,
     175,   174,   173,    89,   179,    68,   144,    69,    87,    70,
      99,    71,   102,    72,   106,    73,    90,    86,   132,   172,
     219,    75,    76,   131,   168,   169,   170,    77
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -83
static const yytype_int16 yypact[] =
{
     155,   -83,   -83,   -83,   -83,     0,     6,    74,   126,   -83,
       7,   -83,   155,   -83,    53,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,     0,     6,   -83,   -83,     0,     6,   -83,   -83,
     -83,   -83,   -55,   -83,    73,   -83,   -83,   155,   -83,   -83,
     -83,   -83,   -83,    30,    30,   -83,   119,   -83,   -31,   -83,
      64,   -19,   -83,   -83,   -83,   -83,   -83,    33,   -83,     1,
     -83,   -83,   -83,   -83,   -83,   -83,    64,    66,    63,   -83,
      79,    93,    45,   -83,   -83,   -83,   -83,   -83,    51,    99,
     -83,   -83,   -83,    68,   177,   -83,   -83,    64,    75,    66,
      83,    64,   -83,   -83,   -83,   -83,   -83,   -83,   -83,    72,
     -83,   -83,    72,   -83,   -83,   -83,    72,    84,   127,   -83,
      88,   155,   -83,    87,    -8,    89,    90,    92,   -83,   -83,
     119,   -83,   -83,    98,   -83,   -83,   -83,   150,   -83,   -83,
     108,    46,   107,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,    63,    64,    93,    45,   -83,   134,   109,
     -83,   123,   -83,   -83,    64,   -83,   112,   -83,    64,   -83,
      17,   177,   -83,   -83,   -83,   -83,   -83,   -83,   129,   136,
     -83,    64,   -83,    64,    64,    64,    64,    64,    64,   -83,
     -83,   -24,   -83,   -83,   -83,   -19,   -83,   -11,   -83,    64,
     128,    17,   135,   190,   -83,    46,   141,   -83,   -83,   -83,
     -83,   -83,   -83,   184,   -83,   -83,     9,   -83,   -83,   -83,
     142,   -83,   145,   147,   143,   177,   -83,    64,    64,   107,
     184,   -83,   -83,   -83,   177,   -32,    13,   -83,   -83,   186,
     -83,   -83,   -83,   177,   -83,    64,   149,   -83,   148,   -83,
     177,   -83
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   203,   -83,   -83,    52,   -83,   171,   -83,   -83,
     174,   -83,    35,   -83,   -83,   -83,     3,   -83,   -83,    34,
      39,   -83,   -83,   -83,   -83,   -83,   -83,   110,   -83,   -83,
     -83,   -83,   -83,   -83,   -82,   -83,   -83,    28,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,    76,   -83,     2,   -83,   -66,   -83,   -83,   -83,
     -83,   -83,   -83,   -39,   -83,   132,   -83,   -81,   -83,   -83,
     -83,   130,   -83,   124,   -83,   121,   -41,   -83,   -83,    11,
     -83,   -83,   -83,   -83,   -83,   -83,    36,   -83
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -147
static const yytype_int16 yytable[] =
{
      88,   150,   121,    14,    17,    78,   133,    29,    91,    74,
      19,    67,    42,    59,    60,    14,    61,    62,    63,    64,
     113,     1,     2,     3,     4,     5,     6,     7,     8,    91,
     114,   231,     9,   115,   116,   -88,   117,    58,    59,    60,
      47,    61,    62,    63,    64,   203,    74,    79,   156,    91,
      74,    65,    13,    91,    81,   155,    38,   205,    74,    66,
      40,    74,    39,   180,    13,    74,    41,   163,    85,    50,
     164,   165,   166,   167,    32,    33,    65,   216,    21,   193,
     118,   232,    22,    23,    66,    59,    60,   -74,    61,    62,
      63,    64,   190,    59,    60,    51,    61,    62,    63,    64,
     103,   104,   105,    74,    92,   196,    91,   197,   198,   199,
     200,   201,   202,    74,    47,   187,   135,   107,   136,   137,
     138,   139,   140,    65,    93,    94,    95,    96,    97,    98,
      25,    66,   111,   223,    26,    27,    45,    46,   108,    66,
      55,    33,   230,   134,   141,   142,   100,   101,    74,   -21,
     206,   237,   150,   151,   154,   159,   157,   158,   241,     1,
       2,     3,     4,     5,     6,     7,     8,   160,   161,   238,
       9,   162,   171,   181,   185,   188,    74,    74,   225,   226,
     113,     1,     2,     3,     4,     5,     6,     7,     8,   186,
     114,   207,     9,   115,   116,   -88,   117,   194,    59,    60,
     195,    61,    62,    63,    64,   209,   210,   212,   213,   218,
    -146,   220,   239,   222,   233,    30,   240,    56,    54,   208,
     204,   153,   228,   143,   183,     0,   146,   147,     0,   145,
     227,   211,     0,     0,     0,     0,    65,     0,     0,     0,
     118,     0,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      66,    25,    84,     0,     4,    24,    87,     0,    40,    50,
       4,    50,    67,    21,    22,    12,    24,    25,    26,    27,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    40,
      13,    63,    15,    16,    17,    18,    19,    68,    21,    22,
      37,    24,    25,    26,    27,    69,    87,    66,   114,    40,
      91,    59,     0,    40,    21,    63,    22,    68,    99,    67,
      26,   102,    23,   144,    12,   106,    27,    21,    67,    39,
      24,    25,    26,    27,    21,    22,    59,    68,     4,   161,
      63,    68,     8,     9,    67,    21,    22,    70,    24,    25,
      26,    27,   158,    21,    22,    65,    24,    25,    26,    27,
      55,    56,    57,   144,    41,   171,    40,   173,   174,   175,
     176,   177,   178,   154,   111,   154,    33,    66,    35,    36,
      37,    38,    39,    59,    45,    46,    47,    48,    49,    50,
       4,    67,    64,   215,     8,     9,    63,    64,    39,    67,
      21,    22,   224,    68,    61,    62,    53,    54,   189,    65,
     189,   233,    25,    65,    67,    63,    67,    67,   240,     4,
       5,     6,     7,     8,     9,    10,    11,    69,    18,   235,
      15,    63,    65,    39,    65,    63,   217,   218,   217,   218,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    66,
      13,    63,    15,    16,    17,    18,    19,    68,    21,    22,
      64,    24,    25,    26,    27,    70,    16,    66,    24,    67,
      65,    64,    63,    70,    28,    12,    68,    46,    44,   191,
     185,   111,   220,    91,   148,    -1,   102,   106,    -1,    99,
     219,   195,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    15,
      72,    73,    75,    76,    87,    92,    93,     4,    90,     4,
      91,     4,     8,     9,    89,     4,     8,     9,    88,     0,
      73,    74,    21,    22,    77,    78,    94,    95,    90,    91,
      90,    91,    67,    79,    80,    63,    64,    87,    97,    98,
      39,    65,    81,    82,    81,    21,    78,    99,    68,    21,
      22,    24,    25,    26,    27,    59,    67,   134,   136,   138,
     140,   142,   144,   146,   147,   152,   153,   158,    24,    66,
      83,    21,   100,   102,    96,    67,   148,   139,   127,   134,
     147,    40,    41,    45,    46,    47,    48,    49,    50,   141,
      53,    54,   143,    55,    56,    57,   145,    66,    39,   123,
     103,    64,   101,     3,    13,    16,    17,    19,    63,    76,
      87,   105,   106,   107,   109,   110,   114,   119,   121,   122,
     127,   154,   149,   138,    68,    33,    35,    36,    37,    38,
      39,    61,    62,   136,   137,   142,   144,   146,    84,    85,
      25,    65,   104,    98,    67,    63,   127,    67,    67,    63,
      69,    18,    63,    21,    24,    25,    26,    27,   155,   156,
     157,    65,   150,   133,   132,   131,   130,   129,   128,   135,
     138,    39,    86,   123,   124,    65,    66,   134,    63,   115,
     127,   105,   108,   105,    68,    64,   127,   127,   127,   127,
     127,   127,   127,    69,    83,    68,   134,    63,   108,    70,
      16,   157,    66,    24,   125,   111,    68,   117,    67,   151,
      64,   126,    70,   105,   116,   134,   134,   150,   125,   112,
     105,    63,    68,    28,   113,   118,   120,   105,   127,    63,
      68,   105
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 11:

/* Line 1455 of yacc.c  */
#line 127 ".\\file.y"
    {if(duplicate(curid)){printf("ERROR : Duplicate initialisation\n");exit(0);}insertSTnest(curid,currnest); ins();  }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 128 ".\\file.y"
    {if(duplicate(curid)){printf("ERROR : Duplicate initialisation\n");exit(0);}insertSTnest(curid,currnest); ins();  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 139 ".\\file.y"
    {arrbrackets++;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 139 ".\\file.y"
    {if((yyval) < 1) {printf("ERROR : Array size is invalid at index %d\n", arrbrackets); exit(0);}  setbrackets(curid, arrbrackets); arrbrackets=0;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 140 ".\\file.y"
    {arrbrackets++;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 140 ".\\file.y"
    {if((yyval) < 1){printf("ERROR : Array size is invalid at index %d\n", arrbrackets);}}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 172 ".\\file.y"
    { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 175 ".\\file.y"
    {params_count=0;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 175 ".\\file.y"
    {funcgen();}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 175 ".\\file.y"
    {funcgenend();}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 178 ".\\file.y"
    { insertSTparamscount(currfunc, params_count); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 178 ".\\file.y"
    { insertSTparamscount(currfunc, params_count); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 181 ".\\file.y"
    { check_params(curtype);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 191 ".\\file.y"
    { ins();insertSTnest(curid,1); params_count++; insertSTparamstype(currfunc, curtype); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 204 ".\\file.y"
    {currnest++;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 204 ".\\file.y"
    {deletedata(currnest);currnest--;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 215 ".\\file.y"
    {label1();if((yyvsp[(3) - (4)])!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 215 ".\\file.y"
    {label2();}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 218 ".\\file.y"
    {label3();}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 219 ".\\file.y"
    {label3();}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 222 ".\\file.y"
    {label4();}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 222 ".\\file.y"
    {label1();if((yyvsp[(4) - (5)])!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 222 ".\\file.y"
    {label5();}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 223 ".\\file.y"
    {label4();}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 223 ".\\file.y"
    {label1();if((yyvsp[(6) - (7)])!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 223 ".\\file.y"
    {label5();}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 224 ".\\file.y"
    {label4();}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 224 ".\\file.y"
    {label1();label5();if((yyvsp[(6) - (7)])!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 226 ".\\file.y"
    {if(strcmp(currfunctype,"void")) {printf("ERROR : No return value found for non-void function.\n"); exit(0);}}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 227 ".\\file.y"
    { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("ERROR : Void function calls return statement.\n");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && (yyvsp[(2) - (3)])!=1)
										{
											printf("ERROR : Expression doesn't resolve to return specified datatype.\n"); exit(0);
										}

									}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 243 ".\\file.y"
    {insV();}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 256 ".\\file.y"
    {push("=");}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 256 ".\\file.y"
    {
					if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
					{
					(yyval)=1;
					}
					else
					{(yyval)=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 265 ".\\file.y"
    {push("+=");}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 265 ".\\file.y"
    {
					if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
					(yyval)=1;
					else
					{(yyval)=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 272 ".\\file.y"
    {push("-=");}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 272 ".\\file.y"
    {
					if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
					(yyval)=1;
					else
					{(yyval)=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 279 ".\\file.y"
    {push("*=");}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 279 ".\\file.y"
    {
					if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
					(yyval)=1;
					else
					{(yyval)=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 286 ".\\file.y"
    {push("/=");}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 286 ".\\file.y"
    {
					if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
					(yyval)=1;
					else
					{(yyval)=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
				}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 292 ".\\file.y"
    {push("%=");}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 292 ".\\file.y"
    {
					if((yyvsp[(1) - (4)])==1 && (yyvsp[(3) - (4)])==1)
					(yyval)=1;
					else
					{(yyval)=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 299 ".\\file.y"
    { push("++");if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1; genunary();}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 300 ".\\file.y"
    {push("--");if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 301 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 305 ".\\file.y"
    {push("||");}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 305 ".\\file.y"
    {if((yyvsp[(1) - (4)]) == 1 && (yyvsp[(3) - (4)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 306 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 309 ".\\file.y"
    {push("&&");}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 309 ".\\file.y"
    {if((yyvsp[(1) - (4)]) == 1 && (yyvsp[(3) - (4)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 310 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 314 ".\\file.y"
    {push("!");}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 314 ".\\file.y"
    {if((yyvsp[(2) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 315 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 318 ".\\file.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 319 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 322 ".\\file.y"
    {push(">=");}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 322 ".\\file.y"
    {push("<=");}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 322 ".\\file.y"
    {push(">");}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 322 ".\\file.y"
    {push("<");}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 322 ".\\file.y"
    {push("==");}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 322 ".\\file.y"
    {push("!=");}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 325 ".\\file.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 326 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 329 ".\\file.y"
    {push("+");}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 330 ".\\file.y"
    {push("-");}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 333 ".\\file.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 334 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 337 ".\\file.y"
    {push("*");}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 337 ".\\file.y"
    {push("/");}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 337 ".\\file.y"
    {push("%");}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 340 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 341 ".\\file.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 344 ".\\file.y"
    {
						  push(curid);
						  if(check_id_is_func(curid))
						  {printf("ERROR : Identifier used has been declared as function.\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("ERROR : Identifier used is undeclared.\n");exit(0);}
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("ERROR : Call to array without subscript.\n");exit(0);}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              (yyval) = 1;
			              else
			              (yyval) = -1;
			              }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 357 ".\\file.y"
    {if(!checkscope(curid)){printf("%s\n",curid);printf("ERROR : Identifier used in undeclared\n");exit(0);}}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 358 ".\\file.y"
    {	if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
								(yyval) = 1;
							else
								(yyval) = -1;
							totbrackets = getbrackets(curid);
						}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 365 ".\\file.y"
    {totbrackets--;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 366 ".\\file.y"
    {
										totbrackets--;
										if(totbrackets!=0){
										printf("ERROR : Dimension of array resolution doesn't match declaration. %d\n", totbrackets);
										exit(0);
									}}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 374 ".\\file.y"
    {if((yyvsp[(2) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 375 ".\\file.y"
    {if((yyvsp[(1) - (1)])==-1) (yyval)=-1; else (yyval)=1;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 376 ".\\file.y"
    {if((yyvsp[(1) - (1)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 379 ".\\file.y"
    {

			             if(!check_declaration(curid, "Function"))
			             { printf("ERROR : Function declaration not found.\n"); exit(0);}
			             insertSTF(curid);
						 strcpy(currfunccall,curid);
						 if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
						 {
			             (yyval) = 1;
			             }
			             else
			             (yyval) = -1;
                         call_params_count=0;
												 for(int i=0;i<100;i++) call_params_types[i][0]='\0';

			             }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 396 ".\\file.y"
    { if(strcmp(currfunccall,"printf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("ERROR : Number of arguments in function call doesn't match number of parameters.");
									exit(8);
								}

								if(call_params_count>=1)
								{
									if(check_params_type(currfunccall, call_params_types, call_params_count)==0)
									{
										//for(int i=0;i<call_params_count;i++)
											//printf("\nCALL PARAMS : %d %s \n",i,call_params_types[i]);
										yyerror("Type mismatch in function parameters");
										exit(8);
									}

/*
									else
									{
										printf("\nfunction call");
										for(int i=0;i<call_params_count;i++)
											printf("\n%d %s \n",i,call_params_types[i]);
									}
*/
								}
							}
							callgen();
						 }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 431 ".\\file.y"
    {  call_params_count++; }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 432 ".\\file.y"
    { call_params_count++; }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 434 ".\\file.y"
    {  arggen(1);
										for(int i=0;i<100;i++)
										{
											if(call_params_types[i][0]=='\0')
											{
												strcpy(call_params_types[i],gettypestr(curid));
												break;
											}
										}
									}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 444 ".\\file.y"
    {  arggen(2);
														for(int i=0;i<100;i++)
														{
															if(call_params_types[i][0]=='\0')
															{
																strcpy(call_params_types[i],"int");
																break;
															}
														}
													}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 454 ".\\file.y"
    { arggen(3);
													for(int i=0;i<100;i++)
													{
														if(call_params_types[i][0]=='\0')
														{
															strcpy(call_params_types[i],"char");
															break;
														}
													}
												}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 464 ".\\file.y"
    {  arggen(4);
													for(int i=0;i<100;i++)
													{
														if(call_params_types[i][0]=='\0')
														{
															strcpy(call_params_types[i],"float");
															break;
														}
													}
												}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 474 ".\\file.y"
    {  arggen(5);
															for(int i=0;i<100;i++)
															{
																if(call_params_types[i][0]=='\0')
																{
																	strcpy(call_params_types[i],"char");
																	break;
																}
															}
														}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 486 ".\\file.y"
    {  insV(); codegencon(); (yyval)=1; }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 487 ".\\file.y"
    {  insV(); codegencon();(yyval)=-1;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 488 ".\\file.y"
    {  insV(); codegencon();}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 489 ".\\file.y"
    {  insV(); codegencon();(yyval)=1; }
    break;



/* Line 1455 of yacc.c  */
#line 2599 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 491 ".\\file.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

struct stack
{
	char value[100];
	int labelvalue;
}s[100],label[100];


void push(char *x)
{
	strcpy(s[++top].value,x);
}

void swap(char *x, char *y)
{
	char temp = *x;
	*x = *y;
	*y = temp;
}

void reverse(char str[], int length)
{
    int start = 0;
    int end = length -1;
    while (start < end)
    {
        swap((str+start), (str+end));
        start++;
        end--;
    }
}

char* itoa(int num, char* str, int base)
{
    int i = 0;
    int isNegative = 0;


    if (num == 0)
    {
        str[i++] = '0';
        str[i] = '\0';
        return str;
    }

    if (num < 0 && base == 10)
    {
        isNegative = 1;
        num = -num;
    }


    while (num != 0)
    {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
        num = num/base;
    }

    if (isNegative)
        str[i++] = '-';

    str[i] = '\0';


    reverse(str, i);

    return str;
}

void codegen()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s %s %s\n",temp,s[top-2].value,s[top-1].value,s[top].value);
	top = top - 2;
	strcpy(s[top].value,temp);
	count++;
}

void codegencon()
{
	strcpy(temp,"t");
	char buffer[100];
	itoa(count,buffer,10);
	strcat(temp,buffer);
	printf("%s = %s\n",temp,curval);
	push(temp);
	count++;

}

int isunary(char *s)
{
	if(strcmp(s, "--")==0 || strcmp(s, "++")==0)
	{
		return 1;
	}
	return 0;
}

void genunary()
{
	char temp1[100], temp2[100], temp3[100];
	strcpy(temp1, s[top].value);
	strcpy(temp2, s[top-1].value);

	if(isunary(temp1))
	{
		strcpy(temp3, temp1);
		strcpy(temp1, temp2);
		strcpy(temp2, temp3);
	}
	strcpy(temp, "t");
	char buffer[100];
	itoa(count, buffer, 10);
	strcat(temp, buffer);
	count++;

	if(strcmp(temp2,"--")==0)
	{
		printf("%s = %s - 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	if(strcmp(temp2,"++")==0)
	{
		printf("%s = %s + 1\n", temp, temp1);
		printf("%s = %s\n", temp1, temp);
	}

	top = top -2;
}

void codeassign()
{
	printf("%s = %s\n",s[top-2].value,s[top].value);
	top = top - 2;
}

void label1()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("IF not %s GoTo %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop--;

}

void label4()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	label[++ltop].labelvalue = lno++;
}


void label5()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(label[ltop-1].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("GoTo %s:\n",temp);
	strcpy(temp,"L");
	itoa(label[ltop].labelvalue,buffer,10);
	strcat(temp,buffer);
	printf("%s:\n",temp);
	ltop = ltop - 2;


}

void funcgen()
{
	printf("func begin %s\n",currfunc);
}

void funcgenend()
{
	printf("func end\n\n");
}

void arggen(int i)
{
    if(i==1)
    {
	printf("refparam %s\n", curid);
	}
	else
	{
	printf("refparam %s\n", curval);
	}
}

void callgen()
{
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}



int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(ANSI_COLOR_GREEN "Status: Parsing Complete - Valid" ANSI_COLOR_RESET "\n");
		printf("%30s" ANSI_COLOR_CYAN "SYMBOL TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30s" ANSI_COLOR_CYAN "CONSTANT TABLE" ANSI_COLOR_RESET "\n", " ");
		printf("%30s %s\n", " ", "--------------");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf( "Status: Parsing Failed - Invalid\n");
	exit(7);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}

