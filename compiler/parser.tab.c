/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT_LITERAL = 258,
     FLOAT_LITERAL = 259,
     IDENTIFIER = 260,
     STRING_LITERAL = 261,
     LOOP = 262,
     FOR = 263,
     IN = 264,
     IF = 265,
     ELSE = 266,
     WHEN = 267,
     UNLESS = 268,
     AND = 269,
     OR = 270,
     NOT = 271,
     TRUE = 272,
     FALSE = 273,
     ASSIGN_DECL = 274,
     RETURN = 275,
     BREAK = 276,
     CONTINUE = 277,
     ARROW = 278,
     RANGE = 279,
     MEMBER_ACCESS = 280,
     EQ = 281,
     NE = 282,
     LE = 283,
     GE = 284,
     LT = 285,
     GT = 286,
     DOT = 287,
     COMMA = 288,
     COLON = 289,
     ASSIGN = 290,
     PLUS = 291,
     MINUS = 292,
     STAR = 293,
     SLASH = 294,
     PERCENT = 295,
     LPAREN = 296,
     RPAREN = 297,
     LBRACE = 298,
     RBRACE = 299,
     LBRACKET = 300,
     RBRACKET = 301,
     PIPE = 302,
     HASH = 303,
     BACKSLASH = 304,
     UNDERSCORE = 305,
     OBJ_OPEN = 306,
     OBJ_CLOSE = 307,
     USE = 308,
     UMINUS = 309
   };
#endif
/* Tokens.  */
#define INT_LITERAL 258
#define FLOAT_LITERAL 259
#define IDENTIFIER 260
#define STRING_LITERAL 261
#define LOOP 262
#define FOR 263
#define IN 264
#define IF 265
#define ELSE 266
#define WHEN 267
#define UNLESS 268
#define AND 269
#define OR 270
#define NOT 271
#define TRUE 272
#define FALSE 273
#define ASSIGN_DECL 274
#define RETURN 275
#define BREAK 276
#define CONTINUE 277
#define ARROW 278
#define RANGE 279
#define MEMBER_ACCESS 280
#define EQ 281
#define NE 282
#define LE 283
#define GE 284
#define LT 285
#define GT 286
#define DOT 287
#define COMMA 288
#define COLON 289
#define ASSIGN 290
#define PLUS 291
#define MINUS 292
#define STAR 293
#define SLASH 294
#define PERCENT 295
#define LPAREN 296
#define RPAREN 297
#define LBRACE 298
#define RBRACE 299
#define LBRACKET 300
#define RBRACKET 301
#define PIPE 302
#define HASH 303
#define BACKSLASH 304
#define UNDERSCORE 305
#define OBJ_OPEN 306
#define OBJ_CLOSE 307
#define USE 308
#define UMINUS 309




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int yylex(void);
extern int yylineno;
extern char *yytext;
extern FILE *yyin;

void yyerror(const char *s);


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "parser.y"
{
    int ival;
    double fval;
    char *sval;
    struct ASTNode *node;
    struct ASTList *list;
}
/* Line 193 of yacc.c.  */
#line 226 "parser.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 251 "parser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
    YYLTYPE yyls;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   314

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  127
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    20,
      27,    36,    37,    39,    41,    45,    49,    50,    53,    55,
      57,    59,    61,    65,    71,    74,    77,    82,    85,    90,
      93,    98,   103,   105,   110,   115,   120,   125,   132,   139,
     144,   151,   158,   161,   166,   172,   174,   178,   182,   184,
     190,   192,   196,   198,   202,   204,   208,   212,   214,   218,
     222,   226,   230,   232,   236,   240,   242,   246,   250,   254,
     256,   259,   262,   264,   269,   273,   275,   277,   279,   281,
     283,   285,   287,   291,   293,   295,   299,   303,   307,   311,
     317,   321,   325,   331,   337,   343,   351,   355,   359,   362,
     365,   369,   371,   373,   375,   377,   379,   381,   383,   386,
     390,   395,   399,   406,   412,   416,   418,   421,   425,   429,
     430,   432,   434,   438,   439,   441,   443,   447
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    -1,    58,    -1,    57,    58,    -1,
      60,    -1,    66,    -1,    59,    -1,    53,     6,    32,    -1,
      48,     5,    41,    61,    42,    63,    -1,    48,     5,    41,
      61,    42,    23,    70,    32,    -1,    -1,    62,    -1,     5,
      -1,    62,    33,     5,    -1,    43,    64,    44,    -1,    -1,
      64,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    20,    70,    32,    -1,    20,    70,    12,    70,    32,
      -1,    20,    32,    -1,    21,    32,    -1,    21,    12,    70,
      32,    -1,    22,    32,    -1,    22,    12,    70,    32,    -1,
      70,    32,    -1,    70,    12,    70,    32,    -1,    70,    13,
      70,    32,    -1,    63,    -1,    63,    12,    70,    32,    -1,
      63,    13,    70,    32,    -1,     5,    19,    70,    32,    -1,
       5,    35,    70,    32,    -1,     5,    35,    70,    12,    70,
      32,    -1,     5,    35,    70,    13,    70,    32,    -1,    79,
      35,    70,    32,    -1,    79,    35,    70,    12,    70,    32,
      -1,    79,    35,    70,    13,    70,    32,    -1,     7,    63,
      -1,     7,    12,    70,    63,    -1,     8,     5,     9,    70,
      63,    -1,    71,    -1,    70,    47,    71,    -1,    70,    47,
      85,    -1,    72,    -1,    72,    10,    72,    11,    71,    -1,
      73,    -1,    72,    15,    73,    -1,    74,    -1,    73,    14,
      74,    -1,    75,    -1,    74,    26,    75,    -1,    74,    27,
      75,    -1,    76,    -1,    75,    30,    76,    -1,    75,    31,
      76,    -1,    75,    28,    76,    -1,    75,    29,    76,    -1,
      77,    -1,    76,    36,    77,    -1,    76,    37,    77,    -1,
      78,    -1,    77,    38,    78,    -1,    77,    39,    78,    -1,
      77,    40,    78,    -1,    79,    -1,    37,    78,    -1,    16,
      78,    -1,    80,    -1,    79,    45,    70,    46,    -1,    79,
      25,     5,    -1,     3,    -1,     4,    -1,     6,    -1,    17,
      -1,    18,    -1,     5,    -1,    50,    -1,    41,    70,    42,
      -1,    81,    -1,    84,    -1,    45,    88,    46,    -1,    51,
      90,    52,    -1,     3,    24,     3,    -1,     3,    24,     5,
      -1,     3,    24,    41,    70,    42,    -1,     5,    24,     3,
      -1,     5,    24,     5,    -1,     5,    24,    41,    70,    42,
      -1,    41,    70,    42,    24,     3,    -1,    41,    70,    42,
      24,     5,    -1,    41,    70,    42,    24,    41,    70,    42,
      -1,    39,     5,    82,    -1,    39,     5,    39,    -1,    39,
       5,    -1,    39,    83,    -1,    82,    39,    83,    -1,     3,
      -1,     4,    -1,     6,    -1,    17,    -1,    18,    -1,     5,
      -1,    50,    -1,    37,    83,    -1,    41,    70,    42,    -1,
      83,    45,    70,    46,    -1,    83,    25,     5,    -1,    49,
      41,    61,    42,    23,    70,    -1,    49,    41,    61,    42,
      63,    -1,    43,    86,    44,    -1,    87,    -1,    86,    87,
      -1,    70,    23,    70,    -1,    50,    23,    70,    -1,    -1,
      89,    -1,    70,    -1,    89,    33,    70,    -1,    -1,    91,
      -1,    92,    -1,    91,    33,    92,    -1,     5,    34,    70,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    68,    69,    73,    74,    75,    79,    84,
      87,    93,    94,    98,    99,   103,   107,   108,   112,   113,
     114,   115,   116,   117,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   134,   138,   139,   142,   145,
     146,   149,   155,   156,   160,   166,   167,   168,   172,   173,
     179,   180,   184,   185,   189,   190,   191,   195,   196,   197,
     198,   199,   203,   204,   205,   209,   210,   211,   212,   216,
     217,   218,   222,   223,   224,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   243,   246,
     249,   252,   255,   258,   261,   264,   271,   274,   278,   284,
     285,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   304,   307,   313,   317,   318,   322,   323,   327,
     328,   332,   333,   342,   343,   347,   348,   352
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT_LITERAL", "FLOAT_LITERAL",
  "IDENTIFIER", "STRING_LITERAL", "LOOP", "FOR", "IN", "IF", "ELSE",
  "WHEN", "UNLESS", "AND", "OR", "NOT", "TRUE", "FALSE", "ASSIGN_DECL",
  "RETURN", "BREAK", "CONTINUE", "ARROW", "RANGE", "MEMBER_ACCESS", "EQ",
  "NE", "LE", "GE", "LT", "GT", "DOT", "COMMA", "COLON", "ASSIGN", "PLUS",
  "MINUS", "STAR", "SLASH", "PERCENT", "LPAREN", "RPAREN", "LBRACE",
  "RBRACE", "LBRACKET", "RBRACKET", "PIPE", "HASH", "BACKSLASH",
  "UNDERSCORE", "OBJ_OPEN", "OBJ_CLOSE", "USE", "UMINUS", "$accept",
  "program", "top_level_list", "top_level", "use_stmt", "func_def",
  "param_list_opt", "param_list", "block", "statement_list", "statement",
  "var_decl", "assign_stmt", "loop_stmt", "for_stmt", "expr", "cond_expr",
  "or_expr", "and_expr", "eq_expr", "rel_expr", "add_expr", "mul_expr",
  "unary_expr", "postfix_expr", "primary_expr", "wand_call", "wand_args",
  "wand_arg", "lambda", "pattern_match", "match_arms", "match_arm",
  "expr_list_opt", "expr_list", "object_fields_opt", "object_fields",
  "object_field", 0
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
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    58,    59,    60,
      60,    61,    61,    62,    62,    63,    64,    64,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    66,    67,    67,    67,    67,
      67,    67,    68,    68,    69,    70,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    74,    74,    75,    75,    75,
      75,    75,    76,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     6,
       8,     0,     1,     1,     3,     3,     0,     2,     1,     1,
       1,     1,     3,     5,     2,     2,     4,     2,     4,     2,
       4,     4,     1,     4,     4,     4,     4,     6,     6,     4,
       6,     6,     2,     4,     5,     1,     3,     3,     1,     5,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       2,     2,     1,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     3,     3,     3,     3,     5,
       3,     3,     5,     5,     5,     7,     3,     3,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       4,     3,     6,     5,     3,     1,     2,     3,     3,     0,
       1,     1,     3,     0,     1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     7,     5,     6,
       0,     0,     0,     1,     4,    75,    76,    80,    77,     0,
      78,    79,     0,     0,     0,   119,     0,    81,   123,     0,
      45,    48,    50,    52,    54,    57,    62,    65,    69,    72,
      83,    84,    11,     8,     0,     0,    71,    70,    98,     0,
     121,     0,   120,    11,     0,     0,   124,   125,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    12,    87,
      88,     0,    90,    91,     0,    97,    96,    82,    85,     0,
       0,     0,    86,     0,     0,    46,    47,     0,    51,    53,
      55,    56,    60,    61,    58,    59,    63,    64,    66,    67,
      68,    74,     0,     0,     0,     0,     0,   101,   102,   106,
     103,   104,   105,     0,     0,   107,    99,     0,     0,   122,
       0,   127,   126,    81,     0,     0,   115,     0,    73,     0,
      16,     9,    14,    89,    92,   108,     0,     0,     0,   100,
      93,    94,     0,     0,   113,     0,     0,   114,   116,    49,
       0,     0,   109,   111,     0,     0,   112,   118,   117,    10,
      80,     0,     0,     0,     0,     0,    15,    32,    17,    18,
      19,    20,    21,     0,    69,   110,    95,     0,     0,    42,
       0,    24,     0,     0,    25,     0,    27,     0,     0,     0,
       0,    29,     0,     0,     0,     0,     0,    22,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,    43,     0,
       0,    26,    28,    33,    34,    30,    31,     0,     0,    39,
       0,     0,    44,    23,     0,     0,    37,    38,    40,    41
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    77,    78,   141,   161,
     178,     9,   180,   181,   182,   134,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    86,   126,    41,
      96,   135,   136,    51,    52,    55,    56,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
static const yytype_int16 yypact[] =
{
       0,    -7,    21,    37,    67,     0,  -130,  -130,  -130,  -130,
     210,    19,    45,  -130,  -130,    93,  -130,   129,  -130,   210,
    -130,  -130,   210,    77,   210,   210,    69,  -130,   150,    74,
    -130,    10,   177,   135,   243,   166,   202,  -130,   -18,  -130,
    -130,  -130,   216,  -130,     5,     6,  -130,  -130,   184,    -8,
     178,   186,   201,   216,   212,   196,   217,  -130,  -130,   131,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   249,   210,  -130,   224,   225,  -130,
    -130,   210,  -130,  -130,   210,    18,   241,   263,  -130,   210,
     246,   210,  -130,   150,   259,  -130,  -130,    22,   177,   135,
     243,   243,   166,   166,   166,   166,   202,   202,  -130,  -130,
    -130,  -130,   183,    26,   284,    58,    62,  -130,  -130,  -130,
    -130,  -130,  -130,   264,   210,  -130,    66,   264,    35,   178,
      70,   178,  -130,   267,   -19,   194,  -130,   210,  -130,   210,
    -130,  -130,  -130,  -130,  -130,    66,    86,   286,   210,    66,
    -130,  -130,   210,   210,  -130,   210,   210,  -130,  -130,  -130,
      76,    81,  -130,  -130,   190,   110,   178,   178,   178,  -130,
      59,     1,   287,    13,    83,    84,  -130,   240,  -130,  -130,
    -130,  -130,  -130,    60,    16,  -130,  -130,   210,   210,  -130,
     285,  -130,   107,   210,  -130,   210,  -130,   210,   210,   210,
     210,  -130,   210,   128,    23,   210,   210,  -130,    80,   112,
     118,   124,   126,   132,   154,   210,   210,  -130,  -130,    23,
     137,  -130,  -130,  -130,  -130,  -130,  -130,   210,   210,  -130,
     161,   162,  -130,  -130,   172,   175,  -130,  -130,  -130,  -130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   288,  -130,  -130,   242,  -130,  -129,  -130,
    -130,   136,  -130,  -130,  -130,   -10,   -57,   239,   245,   250,
     193,   218,   209,   -16,   141,  -130,  -130,  -130,    97,  -130,
    -130,  -130,   168,  -130,  -130,  -130,  -130,   214
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,   154,    95,    46,   156,     1,    47,    74,    79,    82,
      80,    83,    10,   188,    49,    50,    15,    16,    17,    18,
      60,   117,   118,   119,   120,    61,    11,    75,    59,    19,
      20,    21,   177,   137,    87,   121,   122,    61,   150,    59,
     151,    74,   189,    12,   140,   191,    81,    84,     2,   139,
      22,   202,    23,     3,    24,   108,   109,   110,    25,   124,
      42,    75,    26,    27,    28,   112,   140,    13,   125,   140,
      59,   115,   199,   200,   116,   218,   152,    43,    10,   129,
     159,   131,    48,    45,    15,    16,   170,    18,   171,   172,
     232,   147,   201,   153,   187,   193,   195,    19,    20,    21,
     143,   173,   174,   175,   144,    59,    58,    59,   169,    59,
      53,   148,   221,   140,   146,   194,   196,    44,    22,   206,
      23,    59,    24,    59,   140,   176,    25,    59,   162,   160,
      26,    27,    28,    59,    15,    16,    17,    18,   164,   207,
     215,   216,   165,   166,   222,   167,   168,    19,    20,    21,
     223,   183,   186,    45,    59,    54,   224,    59,   225,    59,
     217,    63,    64,   192,   226,    59,   227,   228,    22,   233,
      23,    59,    24,    59,    94,    59,    25,   203,   204,    59,
      26,    27,    28,   208,    59,   209,   229,   210,   211,   212,
     213,    62,   214,   236,   237,   219,   220,    15,    16,    17,
      18,    59,    69,    70,   238,   230,   231,   239,    59,    59,
      19,    20,    21,    15,    16,    17,    18,   234,   235,    59,
     145,    76,    59,    85,   149,    59,    19,    20,    21,   138,
      59,    22,    88,    23,    89,    24,   185,    59,   157,    25,
      71,    72,    73,    26,   133,    28,    91,    22,    92,    23,
      93,    24,   197,   198,   111,    25,   100,   101,   114,    26,
      27,    28,    15,    16,    17,    18,   113,   117,   118,   119,
     120,    65,    66,    67,    68,    19,    20,    21,   106,   107,
     127,   121,   122,   102,   103,   104,   105,   128,   130,   142,
     155,   163,   190,    14,   205,    90,    22,   179,    23,    97,
      24,   123,   184,   158,    25,   124,    98,   132,    26,   133,
      28,     0,    99,     0,   125
};

static const yytype_int16 yycheck[] =
{
      10,   130,    59,    19,    23,     5,    22,    25,     3,     3,
       5,     5,    19,    12,    24,    25,     3,     4,     5,     6,
      10,     3,     4,     5,     6,    15,     5,    45,    47,    16,
      17,    18,   161,    11,    42,    17,    18,    15,     3,    47,
       5,    25,   171,     6,    43,    32,    41,    41,    48,    23,
      37,    35,    39,    53,    41,    71,    72,    73,    45,    41,
      41,    45,    49,    50,    51,    75,    43,     0,    50,    43,
      47,    81,    12,    13,    84,   204,    41,    32,    19,    89,
     137,    91,     5,    24,     3,     4,     5,     6,     7,     8,
     219,    25,    32,    23,    35,    12,    12,    16,    17,    18,
      42,    20,    21,    22,    42,    47,    32,    47,    32,    47,
      41,    45,    32,    43,   124,    32,    32,    24,    37,    12,
      39,    47,    41,    47,    43,    44,    45,    47,    42,   139,
      49,    50,    51,    47,     3,     4,     5,     6,   148,    32,
      12,    13,   152,   153,    32,   155,   156,    16,    17,    18,
      32,   161,    42,    24,    47,     5,    32,    47,    32,    47,
      32,    26,    27,   173,    32,    47,    12,    13,    37,    32,
      39,    47,    41,    47,    43,    47,    45,   187,   188,    47,
      49,    50,    51,   193,    47,   195,    32,   197,   198,   199,
     200,    14,   202,    32,    32,   205,   206,     3,     4,     5,
       6,    47,    36,    37,    32,   215,   216,    32,    47,    47,
      16,    17,    18,     3,     4,     5,     6,   227,   228,    47,
     123,     5,    47,    39,   127,    47,    16,    17,    18,    46,
      47,    37,    46,    39,    33,    41,    46,    47,    44,    45,
      38,    39,    40,    49,    50,    51,    34,    37,    52,    39,
      33,    41,    12,    13,     5,    45,    63,    64,    33,    49,
      50,    51,     3,     4,     5,     6,    42,     3,     4,     5,
       6,    28,    29,    30,    31,    16,    17,    18,    69,    70,
      39,    17,    18,    65,    66,    67,    68,    24,    42,     5,
      23,     5,     5,     5,     9,    53,    37,   161,    39,    60,
      41,    37,   161,   135,    45,    41,    61,    93,    49,    50,
      51,    -1,    62,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    48,    53,    56,    57,    58,    59,    60,    66,
      19,     5,     6,     0,    58,     3,     4,     5,     6,    16,
      17,    18,    37,    39,    41,    45,    49,    50,    51,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    84,    41,    32,    24,    24,    78,    78,     5,    70,
      70,    88,    89,    41,     5,    90,    91,    92,    32,    47,
      10,    15,    14,    26,    27,    28,    29,    30,    31,    36,
      37,    38,    39,    40,    25,    45,     5,    61,    62,     3,
       5,    41,     3,     5,    41,    39,    82,    42,    46,    33,
      61,    34,    52,    33,    43,    71,    85,    72,    73,    74,
      75,    75,    76,    76,    76,    76,    77,    77,    78,    78,
      78,     5,    70,    42,    33,    70,    70,     3,     4,     5,
       6,    17,    18,    37,    41,    50,    83,    39,    24,    70,
      42,    70,    92,    50,    70,    86,    87,    11,    46,    23,
      43,    63,     5,    42,    42,    83,    70,    25,    45,    83,
       3,     5,    41,    23,    63,    23,    23,    44,    87,    71,
      70,    64,    42,     5,    70,    70,    70,    70,    70,    32,
       5,     7,     8,    20,    21,    22,    44,    63,    65,    66,
      67,    68,    69,    70,    79,    46,    42,    35,    12,    63,
       5,    32,    70,    12,    32,    12,    32,    12,    13,    12,
      13,    32,    35,    70,    70,     9,    12,    32,    70,    70,
      70,    70,    70,    70,    70,    12,    13,    32,    63,    70,
      70,    32,    32,    32,    32,    32,    32,    12,    13,    32,
      70,    70,    63,    32,    70,    70,    32,    32,    32,    32
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;
/* Location data for the look-ahead symbol.  */
YYLTYPE yylloc;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;

  /* The location stack.  */
  YYLTYPE yylsa[YYINITDEPTH];
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;
  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[2];

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;
#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);
	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);
	YYSTACK_RELOCATE (yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 64 "parser.y"
    { ast_root = ast_new_program((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 68 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 4:
#line 69 "parser.y"
    { ast_list_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 5:
#line 73 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 6:
#line 74 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:
#line 75 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 8:
#line 79 "parser.y"
    { (yyval.node) = ast_new_use((yyvsp[(2) - (3)].sval)); ;}
    break;

  case 9:
#line 84 "parser.y"
    {
        (yyval.node) = ast_new_function((yyvsp[(2) - (6)].sval), (yyvsp[(4) - (6)].list), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 10:
#line 87 "parser.y"
    {
        (yyval.node) = ast_new_function((yyvsp[(2) - (8)].sval), (yyvsp[(4) - (8)].list), ast_new_return((yyvsp[(7) - (8)].node)));
    ;}
    break;

  case 11:
#line 93 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 12:
#line 94 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 13:
#line 98 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), ast_new_param((yyvsp[(1) - (1)].sval))); ;}
    break;

  case 14:
#line 99 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), ast_new_param((yyvsp[(3) - (3)].sval))); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 15:
#line 103 "parser.y"
    { (yyval.node) = ast_new_block((yyvsp[(2) - (3)].list)); ;}
    break;

  case 16:
#line 107 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 17:
#line 108 "parser.y"
    { ast_list_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 18:
#line 112 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 113 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 114 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 21:
#line 115 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 22:
#line 116 "parser.y"
    { (yyval.node) = ast_new_return((yyvsp[(2) - (3)].node)); ;}
    break;

  case 23:
#line 117 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_return((yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node), 0); 
    ;}
    break;

  case 24:
#line 120 "parser.y"
    { (yyval.node) = ast_new_return(NULL); ;}
    break;

  case 25:
#line 121 "parser.y"
    { (yyval.node) = ast_new_break(NULL); ;}
    break;

  case 26:
#line 122 "parser.y"
    { (yyval.node) = ast_new_break((yyvsp[(3) - (4)].node)); ;}
    break;

  case 27:
#line 123 "parser.y"
    { (yyval.node) = ast_new_continue(); ;}
    break;

  case 28:
#line 124 "parser.y"
    { (yyval.node) = ast_new_when_stmt(ast_new_continue(), (yyvsp[(3) - (4)].node), 0); ;}
    break;

  case 29:
#line 125 "parser.y"
    { (yyval.node) = ast_new_expr_stmt((yyvsp[(1) - (2)].node)); ;}
    break;

  case 30:
#line 126 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0); ;}
    break;

  case 31:
#line 127 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 1); ;}
    break;

  case 32:
#line 128 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 33:
#line 129 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0); ;}
    break;

  case 34:
#line 130 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 1); ;}
    break;

  case 35:
#line 134 "parser.y"
    { (yyval.node) = ast_new_var_decl((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 36:
#line 138 "parser.y"
    { (yyval.node) = ast_new_assign(ast_new_identifier((yyvsp[(1) - (4)].sval)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 37:
#line 139 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign(ast_new_identifier((yyvsp[(1) - (6)].sval)), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 0); 
    ;}
    break;

  case 38:
#line 142 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign(ast_new_identifier((yyvsp[(1) - (6)].sval)), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 1); 
    ;}
    break;

  case 39:
#line 145 "parser.y"
    { (yyval.node) = ast_new_assign((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 40:
#line 146 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 0); 
    ;}
    break;

  case 41:
#line 149 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 1); 
    ;}
    break;

  case 42:
#line 155 "parser.y"
    { (yyval.node) = ast_new_loop(NULL, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 43:
#line 156 "parser.y"
    { (yyval.node) = ast_new_loop((yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 44:
#line 160 "parser.y"
    {
        (yyval.node) = ast_new_for((yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 45:
#line 166 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 46:
#line 167 "parser.y"
    { (yyval.node) = ast_new_pipe((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 47:
#line 168 "parser.y"
    { (yyval.node) = ast_new_pipe((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 48:
#line 172 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:
#line 173 "parser.y"
    {
        (yyval.node) = ast_new_ternary((yyvsp[(3) - (5)].node), (yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 50:
#line 179 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:
#line 180 "parser.y"
    { (yyval.node) = ast_new_binary(OP_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 52:
#line 184 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 53:
#line 185 "parser.y"
    { (yyval.node) = ast_new_binary(OP_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 54:
#line 189 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 55:
#line 190 "parser.y"
    { (yyval.node) = ast_new_binary(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 56:
#line 191 "parser.y"
    { (yyval.node) = ast_new_binary(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 57:
#line 195 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 58:
#line 196 "parser.y"
    { (yyval.node) = ast_new_binary(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 59:
#line 197 "parser.y"
    { (yyval.node) = ast_new_binary(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 60:
#line 198 "parser.y"
    { (yyval.node) = ast_new_binary(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 61:
#line 199 "parser.y"
    { (yyval.node) = ast_new_binary(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 62:
#line 203 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 63:
#line 204 "parser.y"
    { (yyval.node) = ast_new_binary(OP_ADD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 64:
#line 205 "parser.y"
    { (yyval.node) = ast_new_binary(OP_SUB, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 65:
#line 209 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:
#line 210 "parser.y"
    { (yyval.node) = ast_new_binary(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 67:
#line 211 "parser.y"
    { (yyval.node) = ast_new_binary(OP_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 68:
#line 212 "parser.y"
    { (yyval.node) = ast_new_binary(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 69:
#line 216 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 70:
#line 217 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NEG, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 71:
#line 218 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NOT, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 72:
#line 222 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 73:
#line 223 "parser.y"
    { (yyval.node) = ast_new_index((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 74:
#line 224 "parser.y"
    { (yyval.node) = ast_new_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 75:
#line 228 "parser.y"
    { (yyval.node) = ast_new_int_literal((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 76:
#line 229 "parser.y"
    { (yyval.node) = ast_new_float_literal((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 77:
#line 230 "parser.y"
    { (yyval.node) = ast_new_string_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 78:
#line 231 "parser.y"
    { (yyval.node) = ast_new_bool_literal(1); ;}
    break;

  case 79:
#line 232 "parser.y"
    { (yyval.node) = ast_new_bool_literal(0); ;}
    break;

  case 80:
#line 233 "parser.y"
    { (yyval.node) = ast_new_identifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 81:
#line 234 "parser.y"
    { (yyval.node) = ast_new_implicit(); ;}
    break;

  case 82:
#line 235 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 83:
#line 236 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 84:
#line 237 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 85:
#line 238 "parser.y"
    { (yyval.node) = ast_new_array((yyvsp[(2) - (3)].list)); ;}
    break;

  case 86:
#line 239 "parser.y"
    { (yyval.node) = ast_new_object((yyvsp[(2) - (3)].list)); ;}
    break;

  case 87:
#line 240 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (3)].ival)), ast_new_int_literal((yyvsp[(3) - (3)].ival))); 
    ;}
    break;

  case 88:
#line 243 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (3)].ival)), ast_new_identifier((yyvsp[(3) - (3)].sval))); 
    ;}
    break;

  case 89:
#line 246 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (5)].ival)), (yyvsp[(4) - (5)].node)); 
    ;}
    break;

  case 90:
#line 249 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (3)].sval)), ast_new_int_literal((yyvsp[(3) - (3)].ival))); 
    ;}
    break;

  case 91:
#line 252 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (3)].sval)), ast_new_identifier((yyvsp[(3) - (3)].sval))); 
    ;}
    break;

  case 92:
#line 255 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (5)].sval)), (yyvsp[(4) - (5)].node)); 
    ;}
    break;

  case 93:
#line 258 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (5)].node), ast_new_int_literal((yyvsp[(5) - (5)].ival))); 
    ;}
    break;

  case 94:
#line 261 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (5)].node), ast_new_identifier((yyvsp[(5) - (5)].sval))); 
    ;}
    break;

  case 95:
#line 264 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (7)].node), (yyvsp[(6) - (7)].node)); 
    ;}
    break;

  case 96:
#line 271 "parser.y"
    { 
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].list)); 
    ;}
    break;

  case 97:
#line 274 "parser.y"
    { 
        /* /func/ with no args (trailing slash) */
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (3)].sval), ast_list_new()); 
    ;}
    break;

  case 98:
#line 278 "parser.y"
    { 
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (2)].sval), ast_list_new()); 
    ;}
    break;

  case 99:
#line 284 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 100:
#line 285 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 101:
#line 290 "parser.y"
    { (yyval.node) = ast_new_int_literal((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 102:
#line 291 "parser.y"
    { (yyval.node) = ast_new_float_literal((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 103:
#line 292 "parser.y"
    { (yyval.node) = ast_new_string_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 104:
#line 293 "parser.y"
    { (yyval.node) = ast_new_bool_literal(1); ;}
    break;

  case 105:
#line 294 "parser.y"
    { (yyval.node) = ast_new_bool_literal(0); ;}
    break;

  case 106:
#line 295 "parser.y"
    { (yyval.node) = ast_new_identifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 107:
#line 296 "parser.y"
    { (yyval.node) = ast_new_implicit(); ;}
    break;

  case 108:
#line 297 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NEG, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 109:
#line 298 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 110:
#line 299 "parser.y"
    { (yyval.node) = ast_new_index((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 111:
#line 300 "parser.y"
    { (yyval.node) = ast_new_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 112:
#line 304 "parser.y"
    {
        (yyval.node) = ast_new_lambda((yyvsp[(3) - (6)].list), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 113:
#line 307 "parser.y"
    {
        (yyval.node) = ast_new_lambda((yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 114:
#line 313 "parser.y"
    { (yyval.node) = ast_new_match((yyvsp[(2) - (3)].list)); ;}
    break;

  case 115:
#line 317 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 116:
#line 318 "parser.y"
    { ast_list_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 117:
#line 322 "parser.y"
    { (yyval.node) = ast_new_match_arm((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 118:
#line 323 "parser.y"
    { (yyval.node) = ast_new_match_arm(ast_new_implicit(), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 119:
#line 327 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 120:
#line 328 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 121:
#line 332 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 122:
#line 333 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 123:
#line 342 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 124:
#line 343 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 125:
#line 347 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 126:
#line 348 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 127:
#line 352 "parser.y"
    { (yyval.node) = ast_new_object_field((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2385 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the look-ahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


#line 355 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Parse error at line %d: %s\n", yylineno, s);
}

