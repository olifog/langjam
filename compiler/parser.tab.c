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
     ARROW = 277,
     RANGE = 278,
     MEMBER_ACCESS = 279,
     EQ = 280,
     NE = 281,
     LE = 282,
     GE = 283,
     LT = 284,
     GT = 285,
     DOT = 286,
     COMMA = 287,
     COLON = 288,
     ASSIGN = 289,
     PLUS = 290,
     MINUS = 291,
     STAR = 292,
     SLASH = 293,
     PERCENT = 294,
     LPAREN = 295,
     RPAREN = 296,
     LBRACE = 297,
     RBRACE = 298,
     LBRACKET = 299,
     RBRACKET = 300,
     PIPE = 301,
     HASH = 302,
     BACKSLASH = 303,
     UNDERSCORE = 304,
     OBJ_OPEN = 305,
     OBJ_CLOSE = 306,
     USE = 307,
     UMINUS = 308
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
#define ARROW 277
#define RANGE 278
#define MEMBER_ACCESS 279
#define EQ 280
#define NE 281
#define LE 282
#define GE 283
#define LT 284
#define GT 285
#define DOT 286
#define COMMA 287
#define COLON 288
#define ASSIGN 289
#define PLUS 290
#define MINUS 291
#define STAR 292
#define SLASH 293
#define PERCENT 294
#define LPAREN 295
#define RPAREN 296
#define LBRACE 297
#define RBRACE 298
#define LBRACKET 299
#define RBRACKET 300
#define PIPE 301
#define HASH 302
#define BACKSLASH 303
#define UNDERSCORE 304
#define OBJ_OPEN 305
#define OBJ_CLOSE 306
#define USE 307
#define UMINUS 308




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
#line 224 "parser.tab.c"
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
#line 249 "parser.tab.c"

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
#define YYLAST   317

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  229

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    16,    20,
      27,    36,    37,    39,    41,    45,    49,    50,    53,    55,
      57,    59,    61,    65,    71,    74,    77,    82,    85,    90,
      95,    97,   102,   107,   114,   121,   126,   133,   140,   143,
     148,   154,   156,   160,   164,   166,   172,   174,   178,   180,
     184,   186,   190,   194,   196,   200,   204,   208,   212,   214,
     218,   222,   224,   228,   232,   236,   238,   241,   244,   246,
     251,   255,   257,   259,   261,   263,   265,   267,   269,   273,
     275,   277,   281,   285,   289,   293,   299,   303,   307,   313,
     319,   325,   333,   337,   341,   344,   347,   351,   353,   355,
     357,   359,   361,   363,   365,   368,   372,   377,   381,   388,
     394,   398,   400,   403,   407,   411,   412,   414,   416,   420,
     421,   423,   425,   429
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      55,     0,    -1,    56,    -1,    57,    -1,    56,    57,    -1,
      59,    -1,    65,    -1,    58,    -1,    52,     6,    31,    -1,
      47,     5,    40,    60,    41,    62,    -1,    47,     5,    40,
      60,    41,    22,    69,    31,    -1,    -1,    61,    -1,     5,
      -1,    61,    32,     5,    -1,    42,    63,    43,    -1,    -1,
      63,    64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,
      -1,    20,    69,    31,    -1,    20,    69,    12,    69,    31,
      -1,    20,    31,    -1,    21,    31,    -1,    21,    12,    69,
      31,    -1,    69,    31,    -1,    69,    12,    69,    31,    -1,
      69,    13,    69,    31,    -1,    62,    -1,     5,    19,    69,
      31,    -1,     5,    34,    69,    31,    -1,     5,    34,    69,
      12,    69,    31,    -1,     5,    34,    69,    13,    69,    31,
      -1,    78,    34,    69,    31,    -1,    78,    34,    69,    12,
      69,    31,    -1,    78,    34,    69,    13,    69,    31,    -1,
       7,    62,    -1,     7,    12,    69,    62,    -1,     8,     5,
       9,    69,    62,    -1,    70,    -1,    69,    46,    70,    -1,
      69,    46,    84,    -1,    71,    -1,    71,    10,    71,    11,
      70,    -1,    72,    -1,    71,    15,    72,    -1,    73,    -1,
      72,    14,    73,    -1,    74,    -1,    73,    25,    74,    -1,
      73,    26,    74,    -1,    75,    -1,    74,    29,    75,    -1,
      74,    30,    75,    -1,    74,    27,    75,    -1,    74,    28,
      75,    -1,    76,    -1,    75,    35,    76,    -1,    75,    36,
      76,    -1,    77,    -1,    76,    37,    77,    -1,    76,    38,
      77,    -1,    76,    39,    77,    -1,    78,    -1,    36,    77,
      -1,    16,    77,    -1,    79,    -1,    78,    44,    69,    45,
      -1,    78,    24,     5,    -1,     3,    -1,     4,    -1,     6,
      -1,    17,    -1,    18,    -1,     5,    -1,    49,    -1,    40,
      69,    41,    -1,    80,    -1,    83,    -1,    44,    87,    45,
      -1,    50,    89,    51,    -1,     3,    23,     3,    -1,     3,
      23,     5,    -1,     3,    23,    40,    69,    41,    -1,     5,
      23,     3,    -1,     5,    23,     5,    -1,     5,    23,    40,
      69,    41,    -1,    40,    69,    41,    23,     3,    -1,    40,
      69,    41,    23,     5,    -1,    40,    69,    41,    23,    40,
      69,    41,    -1,    38,     5,    81,    -1,    38,     5,    38,
      -1,    38,     5,    -1,    38,    82,    -1,    81,    38,    82,
      -1,     3,    -1,     4,    -1,     6,    -1,    17,    -1,    18,
      -1,     5,    -1,    49,    -1,    36,    82,    -1,    40,    69,
      41,    -1,    82,    44,    69,    45,    -1,    82,    24,     5,
      -1,    48,    40,    60,    41,    22,    69,    -1,    48,    40,
      60,    41,    62,    -1,    42,    85,    43,    -1,    86,    -1,
      85,    86,    -1,    69,    22,    69,    -1,    49,    22,    69,
      -1,    -1,    88,    -1,    69,    -1,    88,    32,    69,    -1,
      -1,    90,    -1,    91,    -1,    90,    32,    91,    -1,     5,
      33,    69,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    64,    64,    68,    69,    73,    74,    75,    79,    84,
      87,    93,    94,    98,    99,   103,   107,   108,   112,   113,
     114,   115,   116,   117,   120,   121,   122,   123,   124,   125,
     126,   130,   134,   135,   138,   141,   142,   145,   151,   152,
     156,   162,   163,   164,   168,   169,   175,   176,   180,   181,
     185,   186,   187,   191,   192,   193,   194,   195,   199,   200,
     201,   205,   206,   207,   208,   212,   213,   214,   218,   219,
     220,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   239,   242,   245,   248,   251,   254,
     257,   260,   267,   270,   274,   280,   281,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   300,   303,
     309,   313,   314,   318,   319,   323,   324,   328,   329,   338,
     339,   343,   344,   348
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
  "RETURN", "BREAK", "ARROW", "RANGE", "MEMBER_ACCESS", "EQ", "NE", "LE",
  "GE", "LT", "GT", "DOT", "COMMA", "COLON", "ASSIGN", "PLUS", "MINUS",
  "STAR", "SLASH", "PERCENT", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACKET", "RBRACKET", "PIPE", "HASH", "BACKSLASH", "UNDERSCORE",
  "OBJ_OPEN", "OBJ_CLOSE", "USE", "UMINUS", "$accept", "program",
  "top_level_list", "top_level", "use_stmt", "func_def", "param_list_opt",
  "param_list", "block", "statement_list", "statement", "var_decl",
  "assign_stmt", "loop_stmt", "for_stmt", "expr", "cond_expr", "or_expr",
  "and_expr", "eq_expr", "rel_expr", "add_expr", "mul_expr", "unary_expr",
  "postfix_expr", "primary_expr", "wand_call", "wand_args", "wand_arg",
  "lambda", "pattern_match", "match_arms", "match_arm", "expr_list_opt",
  "expr_list", "object_fields_opt", "object_fields", "object_field", 0
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
     305,   306,   307,   308
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    54,    55,    56,    56,    57,    57,    57,    58,    59,
      59,    60,    60,    61,    61,    62,    63,    63,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    65,    66,    66,    66,    66,    66,    66,    67,    67,
      68,    69,    69,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    73,    74,    74,    74,    74,    74,    75,    75,
      75,    76,    76,    76,    76,    77,    77,    77,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    80,    80,    80,    81,    81,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    83,    83,
      84,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     6,
       8,     0,     1,     1,     3,     3,     0,     2,     1,     1,
       1,     1,     3,     5,     2,     2,     4,     2,     4,     4,
       1,     4,     4,     6,     6,     4,     6,     6,     2,     4,
       5,     1,     3,     3,     1,     5,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     1,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     3,     3,     3,     5,     3,     3,     5,     5,
       5,     7,     3,     3,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     4,     3,     6,     5,
       3,     1,     2,     3,     3,     0,     1,     1,     3,     0,
       1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     2,     3,     7,     5,     6,
       0,     0,     0,     1,     4,    71,    72,    76,    73,     0,
      74,    75,     0,     0,     0,   115,     0,    77,   119,     0,
      41,    44,    46,    48,    50,    53,    58,    61,    65,    68,
      79,    80,    11,     8,     0,     0,    67,    66,    94,     0,
     117,     0,   116,    11,     0,     0,   120,   121,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,    12,    83,
      84,     0,    86,    87,     0,    93,    92,    78,    81,     0,
       0,     0,    82,     0,     0,    42,    43,     0,    47,    49,
      51,    52,    56,    57,    54,    55,    59,    60,    62,    63,
      64,    70,     0,     0,     0,     0,     0,    97,    98,   102,
      99,   100,   101,     0,     0,   103,    95,     0,     0,   118,
       0,   123,   122,    77,     0,     0,   111,     0,    69,     0,
      16,     9,    14,    85,    88,   104,     0,     0,     0,    96,
      89,    90,     0,     0,   109,     0,     0,   110,   112,    45,
       0,     0,   105,   107,     0,     0,   108,   114,   113,    10,
      76,     0,     0,     0,     0,    15,    30,    17,    18,    19,
      20,    21,     0,    65,   106,    91,     0,     0,    38,     0,
      24,     0,     0,    25,     0,     0,    27,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,     0,    32,
      39,     0,     0,    26,    28,    29,     0,     0,    35,     0,
       0,    40,    23,     0,     0,    33,    34,    36,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    77,    78,   141,   161,
     177,     9,   179,   180,   181,   134,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    86,   126,    41,
      96,   135,   136,    51,    52,    55,    56,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -130
static const yytype_int16 yypact[] =
{
      -1,     1,    13,    39,    30,    -1,  -130,  -130,  -130,  -130,
     260,     3,    41,  -130,  -130,    43,  -130,    55,  -130,   260,
    -130,  -130,   260,   102,   260,   260,   124,  -130,   155,    45,
    -130,    95,   156,    91,   181,   168,   157,  -130,    -8,  -130,
    -130,  -130,   167,  -130,     8,    14,  -130,  -130,    89,    87,
     128,   141,   160,   167,   194,   138,   173,  -130,  -130,   131,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   260,
     260,   260,   260,   260,   226,   260,  -130,   192,   203,  -130,
    -130,   260,  -130,  -130,   260,    20,   209,   228,  -130,   260,
     208,   260,  -130,   155,   267,  -130,  -130,    98,   156,    91,
     181,   181,   168,   168,   168,   168,   157,   157,  -130,  -130,
    -130,  -130,   178,    19,   248,   111,   120,  -130,  -130,  -130,
    -130,  -130,  -130,     4,   260,  -130,    49,     4,    24,   128,
      53,   128,  -130,   232,    17,   196,  -130,   260,  -130,   260,
    -130,  -130,  -130,  -130,  -130,    49,   137,   250,   260,    49,
    -130,  -130,   260,   260,  -130,   260,   260,  -130,  -130,  -130,
      65,    82,  -130,  -130,   180,   147,   128,   128,   128,  -130,
      78,    -7,   252,   212,     0,  -130,  -130,  -130,  -130,  -130,
    -130,  -130,    21,    60,  -130,  -130,   260,   260,  -130,   249,
    -130,    16,   260,  -130,   260,   260,  -130,   260,    37,    73,
     260,   260,  -130,    75,    77,   108,    46,   260,   260,  -130,
    -130,    73,   109,  -130,  -130,  -130,   260,   260,  -130,   110,
     113,  -130,  -130,   119,   122,  -130,  -130,  -130,  -130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,  -130,  -130,   254,  -130,  -130,   214,  -130,  -129,  -130,
    -130,   107,  -130,  -130,  -130,   -10,   -57,   215,   213,   207,
     174,   154,   172,   -16,   118,  -130,  -130,  -130,    35,  -130,
    -130,  -130,   145,  -130,  -130,  -130,  -130,   188
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      29,   154,    95,    46,     1,   187,    47,   117,   118,   119,
     120,    79,   192,    80,    49,    50,    74,    82,    11,    83,
      10,   121,   122,   117,   118,   119,   120,   150,   201,   151,
      13,   193,   176,   194,   195,   140,    75,   121,   122,   156,
     123,   139,   188,    42,   124,    12,     2,   202,    81,   207,
     208,     3,   196,   125,    84,   108,   109,   110,   216,   217,
     124,   140,    59,    59,   152,   112,    44,    59,   209,   125,
     210,   115,    43,   147,   116,   153,    58,   218,    45,   129,
     159,   131,   221,    59,    74,    15,    16,   170,    18,   171,
     172,    59,    59,   148,   197,   140,   169,    10,    19,    20,
      21,    45,   173,   174,    75,    60,   213,    48,   214,   137,
      61,    59,   186,    61,   146,   140,    63,    64,    22,    59,
      23,    59,    24,    59,   140,   175,    25,    85,    87,   160,
      26,    27,    28,    59,    15,    16,    17,    18,   164,   215,
     222,   225,   165,   166,   226,   167,   168,    19,    20,    21,
     227,   182,   143,   228,    59,    59,    59,    59,   145,    59,
      54,   144,   149,   191,    53,    59,    59,    22,    59,    23,
      62,    24,    76,    94,    59,    25,   198,   199,   162,    26,
      27,    28,   203,    59,   204,   205,    88,   206,   185,    92,
     211,   212,    89,    59,    71,    72,    73,   219,   220,    15,
      16,    17,    18,    69,    70,    93,   223,   224,    65,    66,
      67,    68,    19,    20,    21,    15,    16,    17,    18,   102,
     103,   104,   105,   138,    59,   184,    59,    91,    19,    20,
      21,   111,    22,   113,    23,   114,    24,   100,   101,   157,
      25,   106,   107,   190,    26,   133,    28,   127,    22,   130,
      23,   128,    24,   142,   155,   163,    25,   189,   200,    14,
      26,    27,    28,    15,    16,    17,    18,    90,   178,    99,
      15,    16,    17,    18,    98,    97,    19,    20,    21,   183,
     158,   132,     0,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    22,     0,    23,     0,
      24,     0,     0,    22,    25,    23,     0,    24,    26,    27,
      28,    25,     0,     0,     0,    26,   133,    28
};

static const yytype_int16 yycheck[] =
{
      10,   130,    59,    19,     5,    12,    22,     3,     4,     5,
       6,     3,    12,     5,    24,    25,    24,     3,     5,     5,
      19,    17,    18,     3,     4,     5,     6,     3,    12,     5,
       0,    31,   161,    12,    13,    42,    44,    17,    18,    22,
      36,    22,   171,    40,    40,     6,    47,    31,    40,    12,
      13,    52,    31,    49,    40,    71,    72,    73,    12,    13,
      40,    42,    46,    46,    40,    75,    23,    46,    31,    49,
     199,    81,    31,    24,    84,    22,    31,    31,    23,    89,
     137,    91,   211,    46,    24,     3,     4,     5,     6,     7,
       8,    46,    46,    44,    34,    42,    31,    19,    16,    17,
      18,    23,    20,    21,    44,    10,    31,     5,    31,    11,
      15,    46,    34,    15,   124,    42,    25,    26,    36,    46,
      38,    46,    40,    46,    42,    43,    44,    38,    41,   139,
      48,    49,    50,    46,     3,     4,     5,     6,   148,    31,
      31,    31,   152,   153,    31,   155,   156,    16,    17,    18,
      31,   161,    41,    31,    46,    46,    46,    46,   123,    46,
       5,    41,   127,   173,    40,    46,    46,    36,    46,    38,
      14,    40,     5,    42,    46,    44,   186,   187,    41,    48,
      49,    50,   192,    46,   194,   195,    45,   197,    41,    51,
     200,   201,    32,    46,    37,    38,    39,   207,   208,     3,
       4,     5,     6,    35,    36,    32,   216,   217,    27,    28,
      29,    30,    16,    17,    18,     3,     4,     5,     6,    65,
      66,    67,    68,    45,    46,    45,    46,    33,    16,    17,
      18,     5,    36,    41,    38,    32,    40,    63,    64,    43,
      44,    69,    70,    31,    48,    49,    50,    38,    36,    41,
      38,    23,    40,     5,    22,     5,    44,     5,     9,     5,
      48,    49,    50,     3,     4,     5,     6,    53,   161,    62,
       3,     4,     5,     6,    61,    60,    16,    17,    18,   161,
     135,    93,    -1,    16,    17,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,    -1,
      40,    -1,    -1,    36,    44,    38,    -1,    40,    48,    49,
      50,    44,    -1,    -1,    -1,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    47,    52,    55,    56,    57,    58,    59,    65,
      19,     5,     6,     0,    57,     3,     4,     5,     6,    16,
      17,    18,    36,    38,    40,    44,    48,    49,    50,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    83,    40,    31,    23,    23,    77,    77,     5,    69,
      69,    87,    88,    40,     5,    89,    90,    91,    31,    46,
      10,    15,    14,    25,    26,    27,    28,    29,    30,    35,
      36,    37,    38,    39,    24,    44,     5,    60,    61,     3,
       5,    40,     3,     5,    40,    38,    81,    41,    45,    32,
      60,    33,    51,    32,    42,    70,    84,    71,    72,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    77,    77,
      77,     5,    69,    41,    32,    69,    69,     3,     4,     5,
       6,    17,    18,    36,    40,    49,    82,    38,    23,    69,
      41,    69,    91,    49,    69,    85,    86,    11,    45,    22,
      42,    62,     5,    41,    41,    82,    69,    24,    44,    82,
       3,     5,    40,    22,    62,    22,    22,    43,    86,    70,
      69,    63,    41,     5,    69,    69,    69,    69,    69,    31,
       5,     7,     8,    20,    21,    43,    62,    64,    65,    66,
      67,    68,    69,    78,    45,    41,    34,    12,    62,     5,
      31,    69,    12,    31,    12,    13,    31,    34,    69,    69,
       9,    12,    31,    69,    69,    69,    69,    12,    13,    31,
      62,    69,    69,    31,    31,    31,    12,    13,    31,    69,
      69,    62,    31,    69,    69,    31,    31,    31,    31
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
    { (yyval.node) = ast_new_expr_stmt((yyvsp[(1) - (2)].node)); ;}
    break;

  case 28:
#line 124 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0); ;}
    break;

  case 29:
#line 125 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 1); ;}
    break;

  case 30:
#line 126 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 31:
#line 130 "parser.y"
    { (yyval.node) = ast_new_var_decl((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 32:
#line 134 "parser.y"
    { (yyval.node) = ast_new_assign(ast_new_identifier((yyvsp[(1) - (4)].sval)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 33:
#line 135 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign(ast_new_identifier((yyvsp[(1) - (6)].sval)), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 0); 
    ;}
    break;

  case 34:
#line 138 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign(ast_new_identifier((yyvsp[(1) - (6)].sval)), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 1); 
    ;}
    break;

  case 35:
#line 141 "parser.y"
    { (yyval.node) = ast_new_assign((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 36:
#line 142 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 0); 
    ;}
    break;

  case 37:
#line 145 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 1); 
    ;}
    break;

  case 38:
#line 151 "parser.y"
    { (yyval.node) = ast_new_loop(NULL, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 39:
#line 152 "parser.y"
    { (yyval.node) = ast_new_loop((yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 40:
#line 156 "parser.y"
    {
        (yyval.node) = ast_new_for((yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 41:
#line 162 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 42:
#line 163 "parser.y"
    { (yyval.node) = ast_new_pipe((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 43:
#line 164 "parser.y"
    { (yyval.node) = ast_new_pipe((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 44:
#line 168 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:
#line 169 "parser.y"
    {
        (yyval.node) = ast_new_ternary((yyvsp[(3) - (5)].node), (yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 46:
#line 175 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 47:
#line 176 "parser.y"
    { (yyval.node) = ast_new_binary(OP_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 48:
#line 180 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:
#line 181 "parser.y"
    { (yyval.node) = ast_new_binary(OP_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 50:
#line 185 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 51:
#line 186 "parser.y"
    { (yyval.node) = ast_new_binary(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 52:
#line 187 "parser.y"
    { (yyval.node) = ast_new_binary(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 53:
#line 191 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 54:
#line 192 "parser.y"
    { (yyval.node) = ast_new_binary(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 55:
#line 193 "parser.y"
    { (yyval.node) = ast_new_binary(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 56:
#line 194 "parser.y"
    { (yyval.node) = ast_new_binary(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 57:
#line 195 "parser.y"
    { (yyval.node) = ast_new_binary(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 58:
#line 199 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 59:
#line 200 "parser.y"
    { (yyval.node) = ast_new_binary(OP_ADD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 60:
#line 201 "parser.y"
    { (yyval.node) = ast_new_binary(OP_SUB, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 61:
#line 205 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 62:
#line 206 "parser.y"
    { (yyval.node) = ast_new_binary(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 63:
#line 207 "parser.y"
    { (yyval.node) = ast_new_binary(OP_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 64:
#line 208 "parser.y"
    { (yyval.node) = ast_new_binary(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 65:
#line 212 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 66:
#line 213 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NEG, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 67:
#line 214 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NOT, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 68:
#line 218 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 69:
#line 219 "parser.y"
    { (yyval.node) = ast_new_index((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 70:
#line 220 "parser.y"
    { (yyval.node) = ast_new_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 71:
#line 224 "parser.y"
    { (yyval.node) = ast_new_int_literal((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 72:
#line 225 "parser.y"
    { (yyval.node) = ast_new_float_literal((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 73:
#line 226 "parser.y"
    { (yyval.node) = ast_new_string_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 74:
#line 227 "parser.y"
    { (yyval.node) = ast_new_bool_literal(1); ;}
    break;

  case 75:
#line 228 "parser.y"
    { (yyval.node) = ast_new_bool_literal(0); ;}
    break;

  case 76:
#line 229 "parser.y"
    { (yyval.node) = ast_new_identifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 77:
#line 230 "parser.y"
    { (yyval.node) = ast_new_implicit(); ;}
    break;

  case 78:
#line 231 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 79:
#line 232 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 80:
#line 233 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 81:
#line 234 "parser.y"
    { (yyval.node) = ast_new_array((yyvsp[(2) - (3)].list)); ;}
    break;

  case 82:
#line 235 "parser.y"
    { (yyval.node) = ast_new_object((yyvsp[(2) - (3)].list)); ;}
    break;

  case 83:
#line 236 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (3)].ival)), ast_new_int_literal((yyvsp[(3) - (3)].ival))); 
    ;}
    break;

  case 84:
#line 239 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (3)].ival)), ast_new_identifier((yyvsp[(3) - (3)].sval))); 
    ;}
    break;

  case 85:
#line 242 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (5)].ival)), (yyvsp[(4) - (5)].node)); 
    ;}
    break;

  case 86:
#line 245 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (3)].sval)), ast_new_int_literal((yyvsp[(3) - (3)].ival))); 
    ;}
    break;

  case 87:
#line 248 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (3)].sval)), ast_new_identifier((yyvsp[(3) - (3)].sval))); 
    ;}
    break;

  case 88:
#line 251 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (5)].sval)), (yyvsp[(4) - (5)].node)); 
    ;}
    break;

  case 89:
#line 254 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (5)].node), ast_new_int_literal((yyvsp[(5) - (5)].ival))); 
    ;}
    break;

  case 90:
#line 257 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (5)].node), ast_new_identifier((yyvsp[(5) - (5)].sval))); 
    ;}
    break;

  case 91:
#line 260 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (7)].node), (yyvsp[(6) - (7)].node)); 
    ;}
    break;

  case 92:
#line 267 "parser.y"
    { 
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].list)); 
    ;}
    break;

  case 93:
#line 270 "parser.y"
    { 
        /* /func/ with no args (trailing slash) */
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (3)].sval), ast_list_new()); 
    ;}
    break;

  case 94:
#line 274 "parser.y"
    { 
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (2)].sval), ast_list_new()); 
    ;}
    break;

  case 95:
#line 280 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 96:
#line 281 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 97:
#line 286 "parser.y"
    { (yyval.node) = ast_new_int_literal((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 98:
#line 287 "parser.y"
    { (yyval.node) = ast_new_float_literal((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 99:
#line 288 "parser.y"
    { (yyval.node) = ast_new_string_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 100:
#line 289 "parser.y"
    { (yyval.node) = ast_new_bool_literal(1); ;}
    break;

  case 101:
#line 290 "parser.y"
    { (yyval.node) = ast_new_bool_literal(0); ;}
    break;

  case 102:
#line 291 "parser.y"
    { (yyval.node) = ast_new_identifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 103:
#line 292 "parser.y"
    { (yyval.node) = ast_new_implicit(); ;}
    break;

  case 104:
#line 293 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NEG, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 105:
#line 294 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 106:
#line 295 "parser.y"
    { (yyval.node) = ast_new_index((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 107:
#line 296 "parser.y"
    { (yyval.node) = ast_new_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 108:
#line 300 "parser.y"
    {
        (yyval.node) = ast_new_lambda((yyvsp[(3) - (6)].list), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 109:
#line 303 "parser.y"
    {
        (yyval.node) = ast_new_lambda((yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 110:
#line 309 "parser.y"
    { (yyval.node) = ast_new_match((yyvsp[(2) - (3)].list)); ;}
    break;

  case 111:
#line 313 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 112:
#line 314 "parser.y"
    { ast_list_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 113:
#line 318 "parser.y"
    { (yyval.node) = ast_new_match_arm((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 114:
#line 319 "parser.y"
    { (yyval.node) = ast_new_match_arm(ast_new_implicit(), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 115:
#line 323 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 116:
#line 324 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 117:
#line 328 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 118:
#line 329 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 119:
#line 338 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 120:
#line 339 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 121:
#line 343 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 122:
#line 344 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 123:
#line 348 "parser.y"
    { (yyval.node) = ast_new_object_field((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2357 "parser.tab.c"
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


#line 351 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Parse error at line %d: %s\n", yylineno, s);
}

