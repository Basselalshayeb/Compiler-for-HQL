/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 3 "parser.y" /* yacc.c:339  */

	#include <cmath>
	#include <cstdio>
	#include <string>
	#include <iostream>

	#pragma warning (disable: 4005)
	
	// this function will be generated
	// by flex
	extern int yylex(); // lexical analyzer
	 
	 // we have to code this function
	extern void yyerror(const char*);

	using namespace std;

#line 84 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    NUM = 258,
    ADD = 259,
    CONSTRAINT = 260,
    ALTER = 261,
    COLUMN = 262,
    TABLE = 263,
    ALL = 264,
    AND = 265,
    ANDOP = 266,
    ANY = 267,
    AS = 268,
    ASC = 269,
    BETWEEN = 270,
    CASE = 271,
    CHECK = 272,
    CREATE = 273,
    DATABASE = 274,
    INDEX = 275,
    OR = 276,
    REPLACE = 277,
    VIEW = 278,
    PROCEDURE = 279,
    UNIQUE = 280,
    COMPARISON = 281,
    NOT = 282,
    DEFAULT = 283,
    DELETE = 284,
    DESC = 285,
    DISTINCT = 286,
    DROP = 287,
    EXEC = 288,
    EXISTS = 289,
    FOREIGN = 290,
    KEY = 291,
    FROM = 292,
    GROUP = 293,
    BY = 294,
    HAVING = 295,
    IN = 296,
    INNER = 297,
    JOIN = 298,
    INSERT = 299,
    INTO = 300,
    SELECT = 301,
    IS = 302,
    NILL = 303,
    LEFT = 304,
    LIKE = 305,
    LIMIT = 306,
    ONLY = 307,
    ORDER = 308,
    OUTER = 309,
    PRIMARY = 310,
    RIGHT = 311,
    TOP = 312,
    SET = 313,
    TRUNCATE = 314,
    UNION = 315,
    UPDATE = 316,
    VALUES = 317,
    WHERE = 318,
    TINYINT = 319,
    SMALLINT = 320,
    INT = 321,
    BIGINT = 322,
    FLOAT = 323,
    DOUBLE = 324,
    DECIMAL = 325,
    STRING = 326,
    VARCHAR = 327,
    CHAR = 328,
    DATE = 329,
    TIMESTAMP = 330,
    ARRAY = 331,
    MAP = 332,
    STRUCT = 333,
    UNIONTYPE = 334,
    SHOW = 335,
    TABLES = 336,
    USE = 337,
    ROW = 338,
    FIELDS = 339,
    LOAD = 340,
    DATA = 341,
    INPATH = 342,
    STORED = 343,
    DESCRIBE = 344,
    IF = 345,
    COMMENT = 346,
    WITH = 347,
    LOCAL = 348,
    OPENBRACKET = 349,
    CLOSEBRACKET = 350,
    TRUE = 351,
    FALSE = 352,
    MANAGED = 353,
    EXTERNAL = 354,
    EXTENDED = 355,
    FORMATTED = 356,
    FULL = 357,
    SEMI = 358,
    CARTISIAN = 359,
    PRODUCT = 360,
    SIDE = 361,
    SORT = 362,
    DISTRIBUTED = 363,
    CLUSTER = 364,
    CAST = 365,
    EXPLAIN = 366,
    DIV = 367,
    RLIKE = 368,
    DOT = 369
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef  double  YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 250 "parser.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
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
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   115

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  116
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  3
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   369

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     115,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   140,   140,   141,   142,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   172,
     173,   174,   175,   176,   177,   178,   179,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ADD", "CONSTRAINT", "ALTER",
  "COLUMN", "TABLE", "ALL", "AND", "ANDOP", "ANY", "AS", "ASC", "BETWEEN",
  "CASE", "CHECK", "CREATE", "DATABASE", "INDEX", "OR", "REPLACE", "VIEW",
  "PROCEDURE", "UNIQUE", "COMPARISON", "NOT", "DEFAULT", "DELETE", "DESC",
  "DISTINCT", "DROP", "EXEC", "EXISTS", "FOREIGN", "KEY", "FROM", "GROUP",
  "BY", "HAVING", "IN", "INNER", "JOIN", "INSERT", "INTO", "SELECT", "IS",
  "NILL", "LEFT", "LIKE", "LIMIT", "ONLY", "ORDER", "OUTER", "PRIMARY",
  "RIGHT", "TOP", "SET", "TRUNCATE", "UNION", "UPDATE", "VALUES", "WHERE",
  "TINYINT", "SMALLINT", "INT", "BIGINT", "FLOAT", "DOUBLE", "DECIMAL",
  "STRING", "VARCHAR", "CHAR", "DATE", "TIMESTAMP", "ARRAY", "MAP",
  "STRUCT", "UNIONTYPE", "SHOW", "TABLES", "USE", "ROW", "FIELDS", "LOAD",
  "DATA", "INPATH", "STORED", "DESCRIBE", "IF", "COMMENT", "WITH", "LOCAL",
  "OPENBRACKET", "CLOSEBRACKET", "TRUE", "FALSE", "MANAGED", "EXTERNAL",
  "EXTENDED", "FORMATTED", "FULL", "SEMI", "CARTISIAN", "PRODUCT", "SIDE",
  "SORT", "DISTRIBUTED", "CLUSTER", "CAST", "EXPLAIN", "DIV", "RLIKE",
  "DOT", "'\\n'", "$accept", "input", "exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,    10
};
# endif

#define YYPACT_NINF -1

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -1,     0,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    29,    27,    28,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,    30,    31,    32,    33,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    35,    34,    36,     4,     3
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
      -1,    -1,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       2,     0,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114
};

static const yytype_int8 yycheck[] =
{
       0,    -1,    -1,    -1,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   117,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   116,   117,   117,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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
                  (unsigned long) yystacksize));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 5:
#line 145 "parser.y" /* yacc.c:1651  */
    { cout<<"ADD"<<endl; }
#line 1440 "parser.cpp" /* yacc.c:1651  */
    break;

  case 6:
#line 146 "parser.y" /* yacc.c:1651  */
    { cout<<"CONSTRAINT"<<endl; }
#line 1446 "parser.cpp" /* yacc.c:1651  */
    break;

  case 7:
#line 147 "parser.y" /* yacc.c:1651  */
    { cout<<"ALTER"<<endl; }
#line 1452 "parser.cpp" /* yacc.c:1651  */
    break;

  case 8:
#line 148 "parser.y" /* yacc.c:1651  */
    { cout<<"COLUMN"<<endl; }
#line 1458 "parser.cpp" /* yacc.c:1651  */
    break;

  case 9:
#line 149 "parser.y" /* yacc.c:1651  */
    { cout<<"TABLE"<<endl; }
#line 1464 "parser.cpp" /* yacc.c:1651  */
    break;

  case 10:
#line 150 "parser.y" /* yacc.c:1651  */
    { cout<<"ALL"<<endl; }
#line 1470 "parser.cpp" /* yacc.c:1651  */
    break;

  case 11:
#line 151 "parser.y" /* yacc.c:1651  */
    { cout<<"AND"<<endl; }
#line 1476 "parser.cpp" /* yacc.c:1651  */
    break;

  case 12:
#line 152 "parser.y" /* yacc.c:1651  */
    { cout<<"ANDOP"<<endl;}
#line 1482 "parser.cpp" /* yacc.c:1651  */
    break;

  case 13:
#line 153 "parser.y" /* yacc.c:1651  */
    { cout<<"ANY"<<endl; }
#line 1488 "parser.cpp" /* yacc.c:1651  */
    break;

  case 14:
#line 154 "parser.y" /* yacc.c:1651  */
    { cout<<"AS"<<endl; }
#line 1494 "parser.cpp" /* yacc.c:1651  */
    break;

  case 15:
#line 155 "parser.y" /* yacc.c:1651  */
    { cout<<"ASC"<<endl; }
#line 1500 "parser.cpp" /* yacc.c:1651  */
    break;

  case 16:
#line 156 "parser.y" /* yacc.c:1651  */
    { cout<<"BETWEEN"<<endl; }
#line 1506 "parser.cpp" /* yacc.c:1651  */
    break;

  case 17:
#line 157 "parser.y" /* yacc.c:1651  */
    { cout<<"CASE"<<endl; }
#line 1512 "parser.cpp" /* yacc.c:1651  */
    break;

  case 18:
#line 158 "parser.y" /* yacc.c:1651  */
    { cout<<"CHECK"<<endl; }
#line 1518 "parser.cpp" /* yacc.c:1651  */
    break;

  case 19:
#line 159 "parser.y" /* yacc.c:1651  */
    { cout<<"CREATE"<<endl; }
#line 1524 "parser.cpp" /* yacc.c:1651  */
    break;

  case 20:
#line 160 "parser.y" /* yacc.c:1651  */
    { cout<<"DATABASE"<<endl; }
#line 1530 "parser.cpp" /* yacc.c:1651  */
    break;

  case 21:
#line 161 "parser.y" /* yacc.c:1651  */
    { cout<<"INDEX"<<endl; }
#line 1536 "parser.cpp" /* yacc.c:1651  */
    break;

  case 22:
#line 162 "parser.y" /* yacc.c:1651  */
    { cout<<"OR"<<endl; }
#line 1542 "parser.cpp" /* yacc.c:1651  */
    break;

  case 23:
#line 163 "parser.y" /* yacc.c:1651  */
    { cout<<"REPLACE"<<endl; }
#line 1548 "parser.cpp" /* yacc.c:1651  */
    break;

  case 24:
#line 164 "parser.y" /* yacc.c:1651  */
    { cout<<"VIEW"<<endl; }
#line 1554 "parser.cpp" /* yacc.c:1651  */
    break;

  case 25:
#line 165 "parser.y" /* yacc.c:1651  */
    { cout<<"PROCEDURE"<<endl; }
#line 1560 "parser.cpp" /* yacc.c:1651  */
    break;

  case 26:
#line 166 "parser.y" /* yacc.c:1651  */
    { cout<<"UNIQUE"<<endl; }
#line 1566 "parser.cpp" /* yacc.c:1651  */
    break;

  case 27:
#line 167 "parser.y" /* yacc.c:1651  */
    { cout<<"NOT"<<endl; }
#line 1572 "parser.cpp" /* yacc.c:1651  */
    break;

  case 28:
#line 168 "parser.y" /* yacc.c:1651  */
    { cout<<"DEFAULT"<<endl; }
#line 1578 "parser.cpp" /* yacc.c:1651  */
    break;

  case 29:
#line 172 "parser.y" /* yacc.c:1651  */
    { cout<<"COMPARISON"<<(yyvsp[0])<<endl; }
#line 1584 "parser.cpp" /* yacc.c:1651  */
    break;

  case 30:
#line 173 "parser.y" /* yacc.c:1651  */
    { cout<<"["<<endl; }
#line 1590 "parser.cpp" /* yacc.c:1651  */
    break;

  case 31:
#line 174 "parser.y" /* yacc.c:1651  */
    { cout<<"]"<<endl; }
#line 1596 "parser.cpp" /* yacc.c:1651  */
    break;

  case 32:
#line 175 "parser.y" /* yacc.c:1651  */
    { cout<<"true"<<endl; }
#line 1602 "parser.cpp" /* yacc.c:1651  */
    break;

  case 33:
#line 176 "parser.y" /* yacc.c:1651  */
    { cout<<"false"<<endl; }
#line 1608 "parser.cpp" /* yacc.c:1651  */
    break;

  case 34:
#line 177 "parser.y" /* yacc.c:1651  */
    { cout<<"rlike"<<endl; }
#line 1614 "parser.cpp" /* yacc.c:1651  */
    break;

  case 35:
#line 178 "parser.y" /* yacc.c:1651  */
    { cout<<"DIV"<<endl;}
#line 1620 "parser.cpp" /* yacc.c:1651  */
    break;

  case 36:
#line 179 "parser.y" /* yacc.c:1651  */
    { cout<<"DOT"<<endl;}
#line 1626 "parser.cpp" /* yacc.c:1651  */
    break;

  case 37:
#line 183 "parser.y" /* yacc.c:1651  */
    { cout<<"DELETE"<<endl; }
#line 1632 "parser.cpp" /* yacc.c:1651  */
    break;

  case 38:
#line 184 "parser.y" /* yacc.c:1651  */
    { cout<<"DESC"<<endl; }
#line 1638 "parser.cpp" /* yacc.c:1651  */
    break;

  case 39:
#line 185 "parser.y" /* yacc.c:1651  */
    { cout<<"DISTINCT"<<endl; }
#line 1644 "parser.cpp" /* yacc.c:1651  */
    break;

  case 40:
#line 186 "parser.y" /* yacc.c:1651  */
    { cout<<"DROP"<<endl; }
#line 1650 "parser.cpp" /* yacc.c:1651  */
    break;

  case 41:
#line 187 "parser.y" /* yacc.c:1651  */
    { cout<<"EXEC"<<endl; }
#line 1656 "parser.cpp" /* yacc.c:1651  */
    break;

  case 42:
#line 188 "parser.y" /* yacc.c:1651  */
    { cout<<"EXISTS"<<endl; }
#line 1662 "parser.cpp" /* yacc.c:1651  */
    break;

  case 43:
#line 189 "parser.y" /* yacc.c:1651  */
    { cout<<"FOREIGN"<<endl; }
#line 1668 "parser.cpp" /* yacc.c:1651  */
    break;

  case 44:
#line 190 "parser.y" /* yacc.c:1651  */
    { cout<<"KEY"<<endl; }
#line 1674 "parser.cpp" /* yacc.c:1651  */
    break;

  case 45:
#line 191 "parser.y" /* yacc.c:1651  */
    { cout<<"FROM"<<endl; }
#line 1680 "parser.cpp" /* yacc.c:1651  */
    break;

  case 46:
#line 192 "parser.y" /* yacc.c:1651  */
    { cout<<"GROUP"<<endl; }
#line 1686 "parser.cpp" /* yacc.c:1651  */
    break;

  case 47:
#line 193 "parser.y" /* yacc.c:1651  */
    { cout<<"BY"<<endl; }
#line 1692 "parser.cpp" /* yacc.c:1651  */
    break;

  case 48:
#line 194 "parser.y" /* yacc.c:1651  */
    { cout<<"HAVING"<<endl; }
#line 1698 "parser.cpp" /* yacc.c:1651  */
    break;

  case 49:
#line 195 "parser.y" /* yacc.c:1651  */
    { cout<<"IN"<<endl; }
#line 1704 "parser.cpp" /* yacc.c:1651  */
    break;

  case 50:
#line 196 "parser.y" /* yacc.c:1651  */
    { cout<<"INNER"<<endl; }
#line 1710 "parser.cpp" /* yacc.c:1651  */
    break;

  case 51:
#line 197 "parser.y" /* yacc.c:1651  */
    { cout<<"JOIN"<<endl; }
#line 1716 "parser.cpp" /* yacc.c:1651  */
    break;

  case 52:
#line 198 "parser.y" /* yacc.c:1651  */
    { cout<<"INSERT"<<endl; }
#line 1722 "parser.cpp" /* yacc.c:1651  */
    break;

  case 53:
#line 199 "parser.y" /* yacc.c:1651  */
    { cout<<"INTO"<<endl; }
#line 1728 "parser.cpp" /* yacc.c:1651  */
    break;

  case 54:
#line 200 "parser.y" /* yacc.c:1651  */
    { cout<<"SELECT"<<endl; }
#line 1734 "parser.cpp" /* yacc.c:1651  */
    break;

  case 55:
#line 201 "parser.y" /* yacc.c:1651  */
    { cout<<"IS"<<endl; }
#line 1740 "parser.cpp" /* yacc.c:1651  */
    break;

  case 56:
#line 202 "parser.y" /* yacc.c:1651  */
    { cout<<"NULL"<<endl; }
#line 1746 "parser.cpp" /* yacc.c:1651  */
    break;

  case 57:
#line 203 "parser.y" /* yacc.c:1651  */
    { cout<<"LEFT"<<endl; }
#line 1752 "parser.cpp" /* yacc.c:1651  */
    break;

  case 58:
#line 204 "parser.y" /* yacc.c:1651  */
    { cout<<"LIKE"<<endl; }
#line 1758 "parser.cpp" /* yacc.c:1651  */
    break;

  case 59:
#line 205 "parser.y" /* yacc.c:1651  */
    { cout<<"LIMIT"<<endl; }
#line 1764 "parser.cpp" /* yacc.c:1651  */
    break;

  case 60:
#line 206 "parser.y" /* yacc.c:1651  */
    { cout<<"ONLY"<<endl; }
#line 1770 "parser.cpp" /* yacc.c:1651  */
    break;

  case 61:
#line 207 "parser.y" /* yacc.c:1651  */
    { cout<<"ORDER"<<endl; }
#line 1776 "parser.cpp" /* yacc.c:1651  */
    break;

  case 62:
#line 208 "parser.y" /* yacc.c:1651  */
    { cout<<"OUTER"<<endl; }
#line 1782 "parser.cpp" /* yacc.c:1651  */
    break;

  case 63:
#line 209 "parser.y" /* yacc.c:1651  */
    { cout<<"PRIMARY"<<endl; }
#line 1788 "parser.cpp" /* yacc.c:1651  */
    break;

  case 64:
#line 210 "parser.y" /* yacc.c:1651  */
    { cout<<"RIGHT"<<endl; }
#line 1794 "parser.cpp" /* yacc.c:1651  */
    break;

  case 65:
#line 211 "parser.y" /* yacc.c:1651  */
    { cout<<"TOP"<<endl; }
#line 1800 "parser.cpp" /* yacc.c:1651  */
    break;

  case 66:
#line 212 "parser.y" /* yacc.c:1651  */
    { cout<<"SET"<<endl; }
#line 1806 "parser.cpp" /* yacc.c:1651  */
    break;

  case 67:
#line 213 "parser.y" /* yacc.c:1651  */
    { cout<<"TRUNCATE"<<endl; }
#line 1812 "parser.cpp" /* yacc.c:1651  */
    break;

  case 68:
#line 214 "parser.y" /* yacc.c:1651  */
    { cout<<"UNION"<<endl; }
#line 1818 "parser.cpp" /* yacc.c:1651  */
    break;

  case 69:
#line 215 "parser.y" /* yacc.c:1651  */
    { cout<<"UPDATE"<<endl; }
#line 1824 "parser.cpp" /* yacc.c:1651  */
    break;

  case 70:
#line 216 "parser.y" /* yacc.c:1651  */
    { cout<<"VALUES"<<endl; }
#line 1830 "parser.cpp" /* yacc.c:1651  */
    break;

  case 71:
#line 217 "parser.y" /* yacc.c:1651  */
    { cout<<"WHERE"<<endl; }
#line 1836 "parser.cpp" /* yacc.c:1651  */
    break;

  case 72:
#line 218 "parser.y" /* yacc.c:1651  */
    { cout<<"MANAGED"<<endl; }
#line 1842 "parser.cpp" /* yacc.c:1651  */
    break;

  case 73:
#line 219 "parser.y" /* yacc.c:1651  */
    { cout<<"EXTERNAL"<<endl; }
#line 1848 "parser.cpp" /* yacc.c:1651  */
    break;

  case 74:
#line 220 "parser.y" /* yacc.c:1651  */
    { cout<<"EXTENDED"<<endl; }
#line 1854 "parser.cpp" /* yacc.c:1651  */
    break;

  case 75:
#line 221 "parser.y" /* yacc.c:1651  */
    { cout<<"FORMATTED"<<endl; }
#line 1860 "parser.cpp" /* yacc.c:1651  */
    break;

  case 76:
#line 222 "parser.y" /* yacc.c:1651  */
    { cout<<"FULL"<<endl; }
#line 1866 "parser.cpp" /* yacc.c:1651  */
    break;

  case 77:
#line 223 "parser.y" /* yacc.c:1651  */
    { cout<<"SEMI"<<endl; }
#line 1872 "parser.cpp" /* yacc.c:1651  */
    break;

  case 78:
#line 224 "parser.y" /* yacc.c:1651  */
    { cout<<"CARTISIAN"<<endl; }
#line 1878 "parser.cpp" /* yacc.c:1651  */
    break;

  case 79:
#line 225 "parser.y" /* yacc.c:1651  */
    { cout<<"PRODUCT"<<endl; }
#line 1884 "parser.cpp" /* yacc.c:1651  */
    break;

  case 80:
#line 226 "parser.y" /* yacc.c:1651  */
    { cout<<"SIDE"<<endl; }
#line 1890 "parser.cpp" /* yacc.c:1651  */
    break;

  case 81:
#line 227 "parser.y" /* yacc.c:1651  */
    { cout<<"SORT"<<endl; }
#line 1896 "parser.cpp" /* yacc.c:1651  */
    break;

  case 82:
#line 228 "parser.y" /* yacc.c:1651  */
    { cout<<"DISTRIBUTED"<<endl; }
#line 1902 "parser.cpp" /* yacc.c:1651  */
    break;

  case 83:
#line 229 "parser.y" /* yacc.c:1651  */
    { cout<<"CLUSTER"<<endl; }
#line 1908 "parser.cpp" /* yacc.c:1651  */
    break;

  case 84:
#line 230 "parser.y" /* yacc.c:1651  */
    { cout<<"CAST"<<endl; }
#line 1914 "parser.cpp" /* yacc.c:1651  */
    break;

  case 85:
#line 231 "parser.y" /* yacc.c:1651  */
    { cout<<"EXPLAIN"<<endl; }
#line 1920 "parser.cpp" /* yacc.c:1651  */
    break;

  case 86:
#line 235 "parser.y" /* yacc.c:1651  */
    { cout<<"TINYINT"<<endl; }
#line 1926 "parser.cpp" /* yacc.c:1651  */
    break;

  case 87:
#line 236 "parser.y" /* yacc.c:1651  */
    { cout<<"SMALLINT"<<endl; }
#line 1932 "parser.cpp" /* yacc.c:1651  */
    break;

  case 88:
#line 237 "parser.y" /* yacc.c:1651  */
    { cout<<"INT"<<endl; }
#line 1938 "parser.cpp" /* yacc.c:1651  */
    break;

  case 89:
#line 238 "parser.y" /* yacc.c:1651  */
    { cout<<"BIGINT"<<endl; }
#line 1944 "parser.cpp" /* yacc.c:1651  */
    break;

  case 90:
#line 239 "parser.y" /* yacc.c:1651  */
    { cout<<"FLOAT"<<endl; }
#line 1950 "parser.cpp" /* yacc.c:1651  */
    break;

  case 91:
#line 240 "parser.y" /* yacc.c:1651  */
    { cout<<"DOUBLE"<<endl; }
#line 1956 "parser.cpp" /* yacc.c:1651  */
    break;

  case 92:
#line 241 "parser.y" /* yacc.c:1651  */
    { cout<<"DECIMAL"<<endl; }
#line 1962 "parser.cpp" /* yacc.c:1651  */
    break;

  case 93:
#line 242 "parser.y" /* yacc.c:1651  */
    { cout<<"STRING"<<endl; }
#line 1968 "parser.cpp" /* yacc.c:1651  */
    break;

  case 94:
#line 243 "parser.y" /* yacc.c:1651  */
    { cout<<"VARCHAR"<<endl; }
#line 1974 "parser.cpp" /* yacc.c:1651  */
    break;

  case 95:
#line 244 "parser.y" /* yacc.c:1651  */
    { cout<<"CHAR"<<endl; }
#line 1980 "parser.cpp" /* yacc.c:1651  */
    break;

  case 96:
#line 245 "parser.y" /* yacc.c:1651  */
    { cout<<"DATE"<<endl; }
#line 1986 "parser.cpp" /* yacc.c:1651  */
    break;

  case 97:
#line 246 "parser.y" /* yacc.c:1651  */
    { cout<<"TIMESTAMP"<<endl; }
#line 1992 "parser.cpp" /* yacc.c:1651  */
    break;

  case 98:
#line 247 "parser.y" /* yacc.c:1651  */
    { cout<<"ARRAY"<<endl; }
#line 1998 "parser.cpp" /* yacc.c:1651  */
    break;

  case 99:
#line 248 "parser.y" /* yacc.c:1651  */
    { cout<<"MAP"<<endl; }
#line 2004 "parser.cpp" /* yacc.c:1651  */
    break;

  case 100:
#line 249 "parser.y" /* yacc.c:1651  */
    { cout<<"STRUCT"<<endl; }
#line 2010 "parser.cpp" /* yacc.c:1651  */
    break;

  case 101:
#line 250 "parser.y" /* yacc.c:1651  */
    { cout<<"UNIONTYPE"<<endl; }
#line 2016 "parser.cpp" /* yacc.c:1651  */
    break;

  case 102:
#line 251 "parser.y" /* yacc.c:1651  */
    { cout<<"SHOW"<<endl; }
#line 2022 "parser.cpp" /* yacc.c:1651  */
    break;

  case 103:
#line 252 "parser.y" /* yacc.c:1651  */
    { cout<<"TABLES"<<endl; }
#line 2028 "parser.cpp" /* yacc.c:1651  */
    break;

  case 104:
#line 253 "parser.y" /* yacc.c:1651  */
    { cout<<"USE"<<endl; }
#line 2034 "parser.cpp" /* yacc.c:1651  */
    break;

  case 105:
#line 254 "parser.y" /* yacc.c:1651  */
    { cout<<"ROW"<<endl; }
#line 2040 "parser.cpp" /* yacc.c:1651  */
    break;

  case 106:
#line 255 "parser.y" /* yacc.c:1651  */
    { cout<<"FIELDS"<<endl; }
#line 2046 "parser.cpp" /* yacc.c:1651  */
    break;

  case 107:
#line 256 "parser.y" /* yacc.c:1651  */
    { cout<<"LOAD"<<endl; }
#line 2052 "parser.cpp" /* yacc.c:1651  */
    break;

  case 108:
#line 257 "parser.y" /* yacc.c:1651  */
    { cout<<"DATA"<<endl; }
#line 2058 "parser.cpp" /* yacc.c:1651  */
    break;

  case 109:
#line 258 "parser.y" /* yacc.c:1651  */
    { cout<<"INPATH"<<endl; }
#line 2064 "parser.cpp" /* yacc.c:1651  */
    break;

  case 110:
#line 259 "parser.y" /* yacc.c:1651  */
    { cout<<"STORED"<<endl; }
#line 2070 "parser.cpp" /* yacc.c:1651  */
    break;

  case 111:
#line 260 "parser.y" /* yacc.c:1651  */
    { cout<<"DESCRIBE"<<endl; }
#line 2076 "parser.cpp" /* yacc.c:1651  */
    break;

  case 112:
#line 261 "parser.y" /* yacc.c:1651  */
    { cout<<"IF"<<endl; }
#line 2082 "parser.cpp" /* yacc.c:1651  */
    break;

  case 113:
#line 262 "parser.y" /* yacc.c:1651  */
    { cout<<"COMMENT"<<endl; }
#line 2088 "parser.cpp" /* yacc.c:1651  */
    break;

  case 114:
#line 263 "parser.y" /* yacc.c:1651  */
    { cout<<"WITH"<<endl; }
#line 2094 "parser.cpp" /* yacc.c:1651  */
    break;

  case 115:
#line 264 "parser.y" /* yacc.c:1651  */
    { cout<<"LOCAL"<<endl; }
#line 2100 "parser.cpp" /* yacc.c:1651  */
    break;


#line 2104 "parser.cpp" /* yacc.c:1651  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 269 "parser.y" /* yacc.c:1910  */

