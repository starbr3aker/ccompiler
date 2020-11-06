/* A Bison parser, made by GNU Bison 3.5.1.  */

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
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "file.y"

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

#line 135 "y.tab.c"

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    leftshift_assignment_operator = 284,
    rightshift_assignment_operator = 285,
    XOR_assignment_operator = 286,
    OR_assignment_operator = 287,
    AND_assignment_operator = 288,
    modulo_assignment_operator = 289,
    multiplication_assignment_operator = 290,
    division_assignment_operator = 291,
    addition_assignment_operator = 292,
    subtraction_assignment_operator = 293,
    assignment_operator = 294,
    OR_operator = 295,
    AND_operator = 296,
    pipe_operator = 297,
    caret_operator = 298,
    amp_operator = 299,
    equality_operator = 300,
    inequality_operator = 301,
    lessthan_assignment_operator = 302,
    lessthan_operator = 303,
    greaterthan_assignment_operator = 304,
    greaterthan_operator = 305,
    leftshift_operator = 306,
    rightshift_operator = 307,
    add_operator = 308,
    subtract_operator = 309,
    multiplication_operator = 310,
    division_operator = 311,
    modulo_operator = 312,
    SIZEOF = 313,
    tilde_operator = 314,
    exclamation_operator = 315,
    increment_operator = 316,
    decrement_operator = 317
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
#define leftshift_assignment_operator 284
#define rightshift_assignment_operator 285
#define XOR_assignment_operator 286
#define OR_assignment_operator 287
#define AND_assignment_operator 288
#define modulo_assignment_operator 289
#define multiplication_assignment_operator 290
#define division_assignment_operator 291
#define addition_assignment_operator 292
#define subtraction_assignment_operator 293
#define assignment_operator 294
#define OR_operator 295
#define AND_operator 296
#define pipe_operator 297
#define caret_operator 298
#define amp_operator 299
#define equality_operator 300
#define inequality_operator 301
#define lessthan_assignment_operator 302
#define lessthan_operator 303
#define greaterthan_assignment_operator 304
#define greaterthan_operator 305
#define leftshift_operator 306
#define rightshift_operator 307
#define add_operator 308
#define subtract_operator 309
#define multiplication_operator 310
#define division_operator 311
#define modulo_operator 312
#define SIZEOF 313
#define tilde_operator 314
#define exclamation_operator 315
#define increment_operator 316
#define decrement_operator 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  89
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  243

#define YYUNDEFTOK  2
#define YYMAXUTOK   317


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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   107,   107,   110,   113,   114,   117,   118,   121,   124,
     124,   127,   127,   128,   128,   132,   132,   135,   136,   139,
     139,   140,   140,   141,   141,   144,   145,   146,   149,   149,
     149,   149,   150,   151,   152,   153,   154,   157,   157,   157,
     157,   160,   160,   160,   160,   163,   163,   166,   166,   169,
     172,   175,   175,   175,   178,   178,   181,   181,   184,   187,
     188,   191,   191,   194,   195,   198,   198,   199,   199,   200,
     200,   201,   204,   204,   207,   208,   211,   212,   215,   215,
     215,   218,   219,   222,   222,   222,   223,   223,   223,   224,
     224,   224,   226,   227,   240,   243,   246,   249,   252,   253,
     256,   256,   265,   265,   272,   272,   279,   279,   286,   286,
     292,   292,   299,   300,   301,   305,   305,   306,   309,   309,
     310,   314,   314,   315,   318,   319,   322,   322,   322,   322,
     322,   322,   325,   326,   329,   330,   333,   334,   337,   337,
     337,   340,   341,   344,   357,   358,   357,   365,   365,   366,
     374,   375,   376,   379,   379,   428,   428,   431,   432,   434,
     444,   454,   464,   474,   486,   487,   488,   489
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "ENDIF", "identifier",
  "array_identifier", "func_identifier", "integer_constant",
  "string_constant", "float_constant", "character_constant", "ELSE",
  "leftshift_assignment_operator", "rightshift_assignment_operator",
  "XOR_assignment_operator", "OR_assignment_operator",
  "AND_assignment_operator", "modulo_assignment_operator",
  "multiplication_assignment_operator", "division_assignment_operator",
  "addition_assignment_operator", "subtraction_assignment_operator",
  "assignment_operator", "OR_operator", "AND_operator", "pipe_operator",
  "caret_operator", "amp_operator", "equality_operator",
  "inequality_operator", "lessthan_assignment_operator",
  "lessthan_operator", "greaterthan_assignment_operator",
  "greaterthan_operator", "leftshift_operator", "rightshift_operator",
  "add_operator", "subtract_operator", "multiplication_operator",
  "division_operator", "modulo_operator", "SIZEOF", "tilde_operator",
  "exclamation_operator", "increment_operator", "decrement_operator",
  "';'", "','", "'['", "']'", "'('", "')'", "'{'", "'}'", "$accept",
  "program", "declaration_list", "D", "declaration",
  "variable_declaration", "variable_declaration_list",
  "variable_declaration_identifier", "$@1", "$@2", "vdi",
  "identifier_array_type", "initilization_params", "$@3", "$@4", "$@5",
  "initilization", "type_specifier", "unsigned_grammar", "signed_grammar",
  "long_grammar", "short_grammar", "function_declaration",
  "function_declaration_type", "function_declaration_param_statement",
  "$@6", "$@7", "params", "parameters_list", "$@8",
  "parameters_identifier_list", "parameters_identifier_list_breakup",
  "param_identifier", "$@9", "param_identifier_breakup", "statement",
  "compound_statement", "$@10", "statment_list", "expression_statment",
  "conditional_statements", "$@11", "$@12",
  "conditional_statements_breakup", "iterative_statements", "$@13", "$@14",
  "$@15", "$@16", "$@17", "$@18", "return_statement", "break_statement",
  "string_initilization", "array_initialization", "array_int_declarations",
  "array_int_declarations_breakup", "expression", "$@19", "$@20", "$@21",
  "$@22", "$@23", "@24", "simple_expression", "$@25", "and_expression",
  "@26", "unary_relation_expression", "@27", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "$@28", "@29", "bracketlist", "$@30",
  "immutable", "call", "@31", "arguments", "arguments_list", "exp",
  "constant", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,    59,    44,    91,    93,    40,    41,   123,
     125
};
# endif

#define YYPACT_NINF (-87)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-148)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     156,   -87,   -87,   -87,   -87,    -1,     9,    60,    95,   -87,
      32,   -87,   156,   -87,    62,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,    -1,     9,   -87,   -87,    -1,     9,   -87,   -87,
     -87,   -87,   -16,   -87,    23,   -87,   -87,   156,   -87,   -87,
     -87,   -87,   -87,    24,    24,   -87,    76,   -87,    -9,   -87,
      69,   -18,   -87,   -87,   -87,   -87,   -87,    51,   -87,    10,
     -87,   -87,   -87,   -87,   -87,   -87,    69,    66,    85,   -87,
      92,    47,    68,   -87,   -87,   -87,   -87,   -87,    80,   -87,
     -87,   -87,   -87,    64,   178,   -87,   -87,    69,    67,    66,
      83,    69,   -87,   -87,   -87,   -87,   -87,   -87,   -87,    49,
     -87,   -87,    49,   -87,   -87,   -87,    49,    82,   109,    88,
     156,   -87,    87,    -7,    89,    90,   105,   -87,   -87,    76,
     -87,   -87,    81,   -87,   -87,   -87,   137,   -87,   -87,   110,
     106,    93,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,    85,    69,    47,    68,   -87,   130,   107,   149,
     -87,   124,   -87,   -87,    69,   -87,   112,   -87,    69,   -87,
      18,   178,   -87,   -87,   -87,   -87,   -87,   -87,   108,   128,
     -87,    69,   -87,    69,    69,    69,    69,    69,    69,   -87,
     -87,   -20,   -87,   -87,   -87,   -18,   -87,   -87,   -30,   -87,
      69,   135,    18,   131,   190,   -87,   106,   141,   -87,   -87,
     -87,   -87,   -87,   -87,   184,   -87,   -87,    12,   -87,   -87,
     -87,   142,   -87,   145,   147,   143,   178,   -87,    69,    69,
      93,   184,   -87,   -87,   -87,   178,   -33,    14,   -87,   -87,
     186,   -87,   -87,   -87,   178,   -87,    69,   152,   -87,   144,
     -87,   178,   -87
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    28,    29,    30,    31,    46,    48,    44,    40,    36,
       0,     2,     5,     6,     0,     7,    51,    45,    32,    47,
      33,    41,    46,    48,    35,    37,    46,    48,    34,     1,
       4,     3,    11,    13,     0,    10,    49,    55,    42,    43,
      38,    39,    50,    18,    18,     8,     0,    56,     0,    54,
       0,     0,    12,    15,    14,    11,     9,     0,    52,   143,
     144,   164,   165,   166,   167,   121,     0,    16,   117,   120,
     123,   125,   133,   137,   142,   141,   151,   152,     0,    23,
      17,    61,    57,    60,    72,   153,   145,     0,     0,   114,
     142,     0,   118,   130,   131,   127,   129,   126,   128,     0,
     134,   135,     0,   138,   139,   140,     0,    19,     0,    64,
       0,    58,     0,     0,     0,     0,     0,    77,    71,     0,
      53,    66,     0,    65,    67,    68,     0,    69,    70,     0,
     156,     0,   122,   150,   110,   106,   108,   102,   104,   100,
     112,   113,   115,     0,   124,   132,   136,    27,     0,     0,
      24,     0,    62,    59,     0,    92,     0,    83,     0,    94,
      72,    72,    76,   159,   160,   161,   162,   163,     0,   155,
     158,     0,   146,     0,     0,     0,     0,     0,     0,   116,
     119,     0,    20,    25,    26,     0,    95,    63,     0,    93,
       0,     0,    72,     0,     0,   154,     0,     0,   111,   107,
     109,   103,   105,   101,     0,    22,    78,     0,    86,    74,
      73,     0,   157,   149,    99,     0,    72,    84,     0,     0,
       0,     0,    97,    96,    79,    72,     0,     0,   148,    98,
      82,    85,    87,    90,    72,    80,     0,     0,    81,     0,
      91,    72,    88
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -87,   204,   -87,   -87,    55,   -87,   171,   -87,   -87,
     174,   -87,    34,   -87,   -87,   -87,   -87,     4,   -87,   -87,
     -14,    39,   -87,   -87,   -87,   -87,   -87,   -87,   111,   -87,
     -87,   -87,   -87,   -87,   -87,   -82,   -87,   -87,    28,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,    75,   -87,     2,   -87,   -66,   -87,   -87,
     -87,   -87,   -87,   -87,   -39,   -87,   133,   -87,   -86,   -87,
     -87,   -87,   126,   -87,   125,   -87,   120,   -41,   -87,   -87,
       8,   -87,   -87,   -87,   -87,   -87,   -87,    33,   -87
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    31,    12,   118,    34,    35,    43,    44,
      52,    53,    80,   147,   148,   108,   182,   119,    28,    24,
      18,    20,    15,    16,    36,    37,    84,    48,    49,    57,
      82,   111,    83,   109,   152,   192,   121,   122,   193,   123,
     124,   216,   230,   235,   125,   190,   225,   218,   236,   126,
     237,   127,   128,   150,   184,   215,   222,   129,   178,   176,
     177,   174,   175,   173,    89,   179,    68,   143,    69,    87,
      70,    99,    71,   102,    72,   106,    73,    90,    86,   131,
     172,   220,    75,    76,   130,   168,   169,   170,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      88,   132,   120,    17,    14,   186,    78,    91,    38,    74,
      91,    67,    40,    19,    59,    60,    14,    61,    62,    63,
      64,   112,     1,     2,     3,     4,     5,     6,     7,     8,
     232,   113,    29,     9,   114,   115,   -89,   116,   206,    59,
      60,    47,    61,    62,    63,    64,    74,   156,    79,   204,
      74,    42,    91,    65,    91,    13,   155,   180,    74,    58,
      66,    74,    39,    50,    21,    74,    41,    13,    22,    23,
      59,    60,    81,    61,    62,    63,    64,    85,    65,   194,
     217,   117,   233,    32,    33,    66,    45,    46,   -75,    51,
      59,    60,   191,    61,    62,    63,    64,    55,    33,    25,
     100,   101,    74,    26,    27,   197,    91,   198,   199,   200,
     201,   202,   203,    74,    47,   188,    66,   134,   135,   136,
     137,   138,   139,   103,   104,   105,    92,   163,   110,    65,
     164,   165,   166,   167,   224,   133,    66,    93,    94,    95,
      96,    97,    98,   231,   140,   141,   107,   -21,   149,    74,
     160,   207,   238,   151,   154,   161,   157,   158,   171,   242,
       1,     2,     3,     4,     5,     6,     7,     8,   159,   181,
     239,     9,   185,   162,   186,   189,   195,    74,    74,   226,
     227,   112,     1,     2,     3,     4,     5,     6,     7,     8,
     187,   113,   196,     9,   114,   115,   -89,   116,   208,    59,
      60,   210,    61,    62,    63,    64,   211,   213,   214,   219,
    -147,   221,   241,   223,   234,   240,    30,    56,    54,   205,
     209,   153,   183,   229,   142,   144,   146,   145,   228,   212,
       0,     0,     0,     0,     0,     0,     0,     0,    65,     0,
       0,   117,     0,     0,     0,    66
};

static const yytype_int16 yycheck[] =
{
      66,    87,    84,     4,     0,    25,    24,    40,    22,    50,
      40,    50,    26,     4,    21,    22,    12,    24,    25,    26,
      27,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      63,    13,     0,    15,    16,    17,    18,    19,    68,    21,
      22,    37,    24,    25,    26,    27,    87,   113,    66,    69,
      91,    67,    40,    60,    40,     0,    63,   143,    99,    68,
      67,   102,    23,    39,     4,   106,    27,    12,     8,     9,
      21,    22,    21,    24,    25,    26,    27,    67,    60,   161,
      68,    63,    68,    21,    22,    67,    63,    64,    70,    65,
      21,    22,   158,    24,    25,    26,    27,    21,    22,     4,
      53,    54,   143,     8,     9,   171,    40,   173,   174,   175,
     176,   177,   178,   154,   110,   154,    67,    34,    35,    36,
      37,    38,    39,    55,    56,    57,    41,    21,    64,    60,
      24,    25,    26,    27,   216,    68,    67,    45,    46,    47,
      48,    49,    50,   225,    61,    62,    66,    65,    39,   190,
      69,   190,   234,    65,    67,    18,    67,    67,    65,   241,
       4,     5,     6,     7,     8,     9,    10,    11,    63,    39,
     236,    15,    65,    63,    25,    63,    68,   218,   219,   218,
     219,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      66,    13,    64,    15,    16,    17,    18,    19,    63,    21,
      22,    70,    24,    25,    26,    27,    16,    66,    24,    67,
      65,    64,    68,    70,    28,    63,    12,    46,    44,   185,
     192,   110,   147,   221,    91,    99,   106,   102,   220,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    63,    -1,    -1,    -1,    67
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    15,
      72,    73,    75,    76,    88,    93,    94,     4,    91,     4,
      92,     4,     8,     9,    90,     4,     8,     9,    89,     0,
      73,    74,    21,    22,    77,    78,    95,    96,    91,    92,
      91,    92,    67,    79,    80,    63,    64,    88,    98,    99,
      39,    65,    81,    82,    81,    21,    78,   100,    68,    21,
      22,    24,    25,    26,    27,    60,    67,   135,   137,   139,
     141,   143,   145,   147,   148,   153,   154,   159,    24,    66,
      83,    21,   101,   103,    97,    67,   149,   140,   128,   135,
     148,    40,    41,    45,    46,    47,    48,    49,    50,   142,
      53,    54,   144,    55,    56,    57,   146,    66,    86,   104,
      64,   102,     3,    13,    16,    17,    19,    63,    76,    88,
     106,   107,   108,   110,   111,   115,   120,   122,   123,   128,
     155,   150,   139,    68,    34,    35,    36,    37,    38,    39,
      61,    62,   137,   138,   143,   145,   147,    84,    85,    39,
     124,    65,   105,    99,    67,    63,   128,    67,    67,    63,
      69,    18,    63,    21,    24,    25,    26,    27,   156,   157,
     158,    65,   151,   134,   132,   133,   130,   131,   129,   136,
     139,    39,    87,   124,   125,    65,    25,    66,   135,    63,
     116,   128,   106,   109,   106,    68,    64,   128,   128,   128,
     128,   128,   128,   128,    69,    83,    68,   135,    63,   109,
      70,    16,   158,    66,    24,   126,   112,    68,   118,    67,
     152,    64,   127,    70,   106,   117,   135,   135,   151,   126,
     113,   106,    63,    68,    28,   114,   119,   121,   106,   128,
      63,    68,   106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    71,    72,    73,    74,    74,    75,    75,    76,    77,
      77,    79,    78,    80,    78,    81,    81,    82,    82,    84,
      83,    85,    83,    86,    83,    87,    87,    87,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    90,    90,    90,    90,    91,    91,    92,    92,    93,
      94,    96,    97,    95,    98,    98,   100,    99,   101,   102,
     102,   104,   103,   105,   105,   106,   106,   106,   106,   106,
     106,   106,   108,   107,   109,   109,   110,   110,   112,   113,
     111,   114,   114,   116,   117,   115,   118,   119,   115,   120,
     121,   115,   122,   122,   123,   124,   125,   126,   127,   127,
     129,   128,   130,   128,   131,   128,   132,   128,   133,   128,
     134,   128,   128,   128,   128,   136,   135,   135,   138,   137,
     137,   140,   139,   139,   141,   141,   142,   142,   142,   142,
     142,   142,   143,   143,   144,   144,   145,   145,   146,   146,
     146,   147,   147,   148,   149,   150,   148,   152,   151,   151,
     153,   153,   153,   155,   154,   156,   156,   157,   157,   158,
     158,   158,   158,   158,   159,   159,   159,   159
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     3,
       1,     0,     3,     0,     3,     1,     2,     2,     0,     0,
       4,     0,     5,     0,     3,     1,     1,     0,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     2,     2,
       0,     1,     2,     2,     0,     1,     0,     1,     0,     2,
       3,     0,     0,     5,     1,     0,     0,     3,     2,     2,
       0,     0,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     4,     2,     0,     2,     1,     0,     0,
       8,     2,     0,     0,     0,     7,     0,     0,    11,     0,
       0,     9,     2,     3,     2,     2,     4,     2,     2,     0,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     2,     2,     1,     0,     4,     1,     0,     4,
       1,     0,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     0,     0,     4,     0,     5,     3,
       3,     1,     1,     0,     5,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
  case 11:
#line 127 "file.y"
                                     {if(duplicate(curid)){printf("ERROR : Duplicate initialisation\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1704 "y.tab.c"
    break;

  case 13:
#line 128 "file.y"
                                           {if(duplicate(curid)){printf("ERROR : Duplicate initialisation\n");exit(0);}insertSTnest(curid,currnest); ins();  }
#line 1710 "y.tab.c"
    break;

  case 19:
#line 139 "file.y"
                                               {arrbrackets++;}
#line 1716 "y.tab.c"
    break;

  case 20:
#line 139 "file.y"
                                                                              {if(yyval < 1) {printf("ERROR : Array size is invalid at index %d\n", arrbrackets); exit(0);}  setbrackets(curid, arrbrackets); arrbrackets=0;}
#line 1722 "y.tab.c"
    break;

  case 21:
#line 140 "file.y"
                                               {arrbrackets++;}
#line 1728 "y.tab.c"
    break;

  case 22:
#line 140 "file.y"
                                                                                         {if(yyval < 1){printf("ERROR : Array size is invalid at index %d\n", arrbrackets);}}
#line 1734 "y.tab.c"
    break;

  case 23:
#line 141 "file.y"
                              {arrbrackets++;}
#line 1740 "y.tab.c"
    break;

  case 24:
#line 141 "file.y"
                                                                    {setbrackets(curid, arrbrackets); arrbrackets=0;}
#line 1746 "y.tab.c"
    break;

  case 50:
#line 172 "file.y"
                                                         { strcpy(currfunctype, curtype); strcpy(currfunc, curid); check_duplicate(curid); insertSTF(curid); ins(); }
#line 1752 "y.tab.c"
    break;

  case 51:
#line 175 "file.y"
                          {params_count=0;}
#line 1758 "y.tab.c"
    break;

  case 52:
#line 175 "file.y"
                                                      {funcgen();}
#line 1764 "y.tab.c"
    break;

  case 53:
#line 175 "file.y"
                                                                             {funcgenend();}
#line 1770 "y.tab.c"
    break;

  case 54:
#line 178 "file.y"
                                          { insertSTparamscount(currfunc, params_count); }
#line 1776 "y.tab.c"
    break;

  case 55:
#line 178 "file.y"
                                                                                            { insertSTparamscount(currfunc, params_count); }
#line 1782 "y.tab.c"
    break;

  case 56:
#line 181 "file.y"
                                         { check_params(curtype);}
#line 1788 "y.tab.c"
    break;

  case 61:
#line 191 "file.y"
                                     { ins();insertSTnest(curid,1); params_count++; insertSTparamstype(currfunc, curtype); }
#line 1794 "y.tab.c"
    break;

  case 72:
#line 204 "file.y"
                          {currnest++;}
#line 1800 "y.tab.c"
    break;

  case 73:
#line 204 "file.y"
                                                                {deletedata(currnest);currnest--;}
#line 1806 "y.tab.c"
    break;

  case 78:
#line 215 "file.y"
                                                       {label1();if(yyvsp[-1]!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
#line 1812 "y.tab.c"
    break;

  case 79:
#line 215 "file.y"
                                                                                                                                                                         {label2();}
#line 1818 "y.tab.c"
    break;

  case 81:
#line 218 "file.y"
                                         {label3();}
#line 1824 "y.tab.c"
    break;

  case 82:
#line 219 "file.y"
                          {label3();}
#line 1830 "y.tab.c"
    break;

  case 83:
#line 222 "file.y"
                                    {label4();}
#line 1836 "y.tab.c"
    break;

  case 84:
#line 222 "file.y"
                                                                      {label1();if(yyvsp[-1]!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
#line 1842 "y.tab.c"
    break;

  case 85:
#line 222 "file.y"
                                                                                                                                                                                        {label5();}
#line 1848 "y.tab.c"
    break;

  case 86:
#line 223 "file.y"
                                                 {label4();}
#line 1854 "y.tab.c"
    break;

  case 87:
#line 223 "file.y"
                                                                                   {label1();if(yyvsp[-1]!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
#line 1860 "y.tab.c"
    break;

  case 88:
#line 223 "file.y"
                                                                                                                                                                                                                   {label5();}
#line 1866 "y.tab.c"
    break;

  case 89:
#line 224 "file.y"
                          {label4();}
#line 1872 "y.tab.c"
    break;

  case 90:
#line 224 "file.y"
                                                                                 {label1();label5();if(yyvsp[-1]!=1){printf("ERROR : Expression in if condition is not resolvable to int.\n");exit(0);}}
#line 1878 "y.tab.c"
    break;

  case 92:
#line 226 "file.y"
                                     {if(strcmp(currfunctype,"void")) {printf("ERROR : No return value found for non-void function.\n"); exit(0);}}
#line 1884 "y.tab.c"
    break;

  case 93:
#line 227 "file.y"
                                                { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("ERROR : Void function calls return statement.\n");
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && yyvsp[-1]!=1)
										{
											printf("ERROR : Expression doesn't resolve to return specified datatype.\n"); exit(0);
										}

									}
#line 1900 "y.tab.c"
    break;

  case 95:
#line 243 "file.y"
                                                              {insV();}
#line 1906 "y.tab.c"
    break;

  case 100:
#line 256 "file.y"
                                                      {push("=");}
#line 1912 "y.tab.c"
    break;

  case 101:
#line 256 "file.y"
                                                                                {
					if(yyvsp[-3]==1 && yyvsp[0]==1)
					{
					yyval=1;
					}
					else
					{yyval=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
#line 1926 "y.tab.c"
    break;

  case 102:
#line 265 "file.y"
                                                               {push("+=");}
#line 1932 "y.tab.c"
    break;

  case 103:
#line 265 "file.y"
                                                                                       {
					if(yyvsp[-3]==1 && yyvsp[0]==1)
					yyval=1;
					else
					{yyval=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
#line 1944 "y.tab.c"
    break;

  case 104:
#line 272 "file.y"
                                                                  {push("-=");}
#line 1950 "y.tab.c"
    break;

  case 105:
#line 272 "file.y"
                                                                                          {
					if(yyvsp[-3]==1 && yyvsp[0]==1)
					yyval=1;
					else
					{yyval=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
#line 1962 "y.tab.c"
    break;

  case 106:
#line 279 "file.y"
                                                                     {push("*=");}
#line 1968 "y.tab.c"
    break;

  case 107:
#line 279 "file.y"
                                                                                              {
					if(yyvsp[-3]==1 && yyvsp[0]==1)
					yyval=1;
					else
					{yyval=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
#line 1980 "y.tab.c"
    break;

  case 108:
#line 286 "file.y"
                                                               {push("/=");}
#line 1986 "y.tab.c"
    break;

  case 109:
#line 286 "file.y"
                                                                                                {
					if(yyvsp[-3]==1 && yyvsp[0]==1)
					yyval=1;
					else
					{yyval=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
				}
#line 1997 "y.tab.c"
    break;

  case 110:
#line 292 "file.y"
                                                             {push("%=");}
#line 2003 "y.tab.c"
    break;

  case 111:
#line 292 "file.y"
                                                                                                {
					if(yyvsp[-3]==1 && yyvsp[-1]==1)
					yyval=1;
					else
					{yyval=-1; printf("ERROR : Operands are of non-resolvable types.\n"); exit(0);}
					codeassign();
				}
#line 2015 "y.tab.c"
    break;

  case 112:
#line 299 "file.y"
                                                                                                        { push("++");if(yyvsp[-1] == 1) yyval=1; else yyval=-1; genunary();}
#line 2021 "y.tab.c"
    break;

  case 113:
#line 300 "file.y"
                                                                                                        {push("--");if(yyvsp[-1] == 1) yyval=1; else yyval=-1;}
#line 2027 "y.tab.c"
    break;

  case 114:
#line 301 "file.y"
                                            {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2033 "y.tab.c"
    break;

  case 115:
#line 305 "file.y"
                                                                       {push("||");}
#line 2039 "y.tab.c"
    break;

  case 116:
#line 305 "file.y"
                                                                                     {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2045 "y.tab.c"
    break;

  case 117:
#line 306 "file.y"
                                         {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2051 "y.tab.c"
    break;

  case 118:
#line 309 "file.y"
                                                      {push("&&");}
#line 2057 "y.tab.c"
    break;

  case 119:
#line 309 "file.y"
                                                                                               {if(yyvsp[-3] == 1 && yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2063 "y.tab.c"
    break;

  case 120:
#line 310 "file.y"
                                                     {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2069 "y.tab.c"
    break;

  case 121:
#line 314 "file.y"
                                               {push("!");}
#line 2075 "y.tab.c"
    break;

  case 122:
#line 314 "file.y"
                                                                                      {if(yyvsp[-1]==1) yyval=1; else yyval=-1; codegen();}
#line 2081 "y.tab.c"
    break;

  case 123:
#line 315 "file.y"
                                             {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2087 "y.tab.c"
    break;

  case 124:
#line 318 "file.y"
                                                                                 {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2093 "y.tab.c"
    break;

  case 125:
#line 319 "file.y"
                                           {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2099 "y.tab.c"
    break;

  case 126:
#line 322 "file.y"
                                                          {push(">=");}
#line 2105 "y.tab.c"
    break;

  case 127:
#line 322 "file.y"
                                                                                                       {push("<=");}
#line 2111 "y.tab.c"
    break;

  case 128:
#line 322 "file.y"
                                                                                                                                            {push(">");}
#line 2117 "y.tab.c"
    break;

  case 129:
#line 322 "file.y"
                                                                                                                                                                            {push("<");}
#line 2123 "y.tab.c"
    break;

  case 130:
#line 322 "file.y"
                                                                                                                                                                                                            {push("==");}
#line 2129 "y.tab.c"
    break;

  case 131:
#line 322 "file.y"
                                                                                                                                                                                                                                               {push("!=");}
#line 2135 "y.tab.c"
    break;

  case 132:
#line 325 "file.y"
                                                             {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2141 "y.tab.c"
    break;

  case 133:
#line 326 "file.y"
                               {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2147 "y.tab.c"
    break;

  case 134:
#line 329 "file.y"
                                       {push("+");}
#line 2153 "y.tab.c"
    break;

  case 135:
#line 330 "file.y"
                                            {push("-");}
#line 2159 "y.tab.c"
    break;

  case 136:
#line 333 "file.y"
                                            {if(yyvsp[-2] == 1 && yyvsp[0]==1) yyval=1; else yyval=-1; codegen();}
#line 2165 "y.tab.c"
    break;

  case 137:
#line 334 "file.y"
                                 {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2171 "y.tab.c"
    break;

  case 138:
#line 337 "file.y"
                                                  {push("*");}
#line 2177 "y.tab.c"
    break;

  case 139:
#line 337 "file.y"
                                                                                  {push("/");}
#line 2183 "y.tab.c"
    break;

  case 140:
#line 337 "file.y"
                                                                                                                 {push("%");}
#line 2189 "y.tab.c"
    break;

  case 141:
#line 340 "file.y"
                                    {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2195 "y.tab.c"
    break;

  case 142:
#line 341 "file.y"
                                  {if(yyvsp[0] == 1) yyval=1; else yyval=-1;}
#line 2201 "y.tab.c"
    break;

  case 143:
#line 344 "file.y"
                                     {
						  push(curid);
						  if(check_id_is_func(curid))
						  {printf("ERROR : Identifier used has been declared as function.\n"); exit(8);}
			              if(!checkscope(curid))
			              {printf("%s\n",curid);printf("ERROR : Identifier used is undeclared.\n");exit(0);}
			              if(!checkarray(curid))
			              {printf("%s\n",curid);printf("ERROR : Call to array without subscript.\n");exit(0);}
			              if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
			              yyval = 1;
			              else
			              yyval = -1;
			              }
#line 2219 "y.tab.c"
    break;

  case 144:
#line 357 "file.y"
                                           {if(!checkscope(curid)){printf("%s\n",curid);printf("ERROR : Identifier used in undeclared\n");exit(0);}}
#line 2225 "y.tab.c"
    break;

  case 145:
#line 358 "file.y"
                                                {	if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
								yyval = 1;
							else
								yyval = -1;
							totbrackets = getbrackets(curid);
						}
#line 2236 "y.tab.c"
    break;

  case 147:
#line 365 "file.y"
                                     {totbrackets--;}
#line 2242 "y.tab.c"
    break;

  case 149:
#line 366 "file.y"
                                                {
										totbrackets--;
										if(totbrackets!=0){
										printf("ERROR : Dimension of array resolution doesn't match declaration, difference of %d\n", totbrackets);
										exit(0);
									}}
#line 2253 "y.tab.c"
    break;

  case 150:
#line 374 "file.y"
                                             {if(yyvsp[-1]==1) yyval=1; else yyval=-1;}
#line 2259 "y.tab.c"
    break;

  case 151:
#line 375 "file.y"
                               {if(yyvsp[0]==-1) yyval=-1; else yyval=1;}
#line 2265 "y.tab.c"
    break;

  case 152:
#line 376 "file.y"
                                   {if(yyvsp[0]==1) yyval=1; else yyval=-1;}
#line 2271 "y.tab.c"
    break;

  case 153:
#line 379 "file.y"
                                        {

			             if(!check_declaration(curid, "Function"))
			             { printf("ERROR : Function declaration not found.\n"); exit(0);}
			             insertSTF(curid);
						 strcpy(currfunccall,curid);
						 if(gettype(curid,0)=='i' || gettype(curid,1)== 'c')
						 {
			             yyval = 1;
			             }
			             else
			             yyval = -1;
                         call_params_count=0;
												 for(int i=0;i<100;i++) call_params_types[i][0]='\0';

			             }
#line 2292 "y.tab.c"
    break;

  case 154:
#line 396 "file.y"
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
										yyerror("ERROR : Type mismatch in function parameters");
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
#line 2327 "y.tab.c"
    break;

  case 157:
#line 431 "file.y"
                                                 {  call_params_count++; }
#line 2333 "y.tab.c"
    break;

  case 158:
#line 432 "file.y"
                              { call_params_count++; }
#line 2339 "y.tab.c"
    break;

  case 159:
#line 434 "file.y"
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
#line 2354 "y.tab.c"
    break;

  case 160:
#line 444 "file.y"
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
#line 2369 "y.tab.c"
    break;

  case 161:
#line 454 "file.y"
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
#line 2384 "y.tab.c"
    break;

  case 162:
#line 464 "file.y"
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
#line 2399 "y.tab.c"
    break;

  case 163:
#line 474 "file.y"
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
#line 2414 "y.tab.c"
    break;

  case 164:
#line 486 "file.y"
                                                {  insV(); codegencon(); yyval=1; }
#line 2420 "y.tab.c"
    break;

  case 165:
#line 487 "file.y"
                                                {  insV(); codegencon();yyval=-1;}
#line 2426 "y.tab.c"
    break;

  case 166:
#line 488 "file.y"
                                                {  insV(); codegencon();}
#line 2432 "y.tab.c"
    break;

  case 167:
#line 489 "file.y"
                                            {  insV(); codegencon();yyval=1; }
#line 2438 "y.tab.c"
    break;


#line 2442 "y.tab.c"

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
#line 491 "file.y"


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
	printf("IF NOT %s GOTO %s\n",s[top].value,temp);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	strcpy(temp,"L");
	char buffer[100];
	itoa(lno,buffer,10);
	strcat(temp,buffer);
	printf("GOTO %s\n",temp);
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
	printf("GOTO %s:\n",temp);
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
		printf("Status: Parsing Complete - Valid" "\n");
		printf("%30sSYMBOL TABLE\n", " ");
		printf("%30s %s\n", " ", "------------");
		printST();

		printf("\n\n%30sCONSTANT TABLE\n", " ");
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
