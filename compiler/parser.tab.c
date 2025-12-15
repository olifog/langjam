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
     UMINUS = 307
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
#define UMINUS 307




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
#line 222 "parser.tab.c"
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
#line 247 "parser.tab.c"

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    21,    30,
      31,    33,    35,    39,    43,    44,    47,    49,    51,    53,
      55,    59,    65,    68,    71,    76,    79,    84,    89,    91,
      96,   101,   108,   115,   120,   127,   134,   137,   142,   148,
     150,   154,   158,   160,   166,   168,   172,   174,   178,   180,
     184,   188,   190,   194,   198,   202,   206,   208,   212,   216,
     218,   222,   226,   230,   232,   235,   238,   240,   245,   249,
     251,   253,   255,   257,   259,   261,   263,   267,   269,   271,
     275,   279,   283,   287,   293,   297,   301,   307,   313,   319,
     327,   331,   335,   338,   341,   345,   347,   349,   351,   353,
     355,   357,   359,   362,   366,   371,   375,   382,   388,   392,
     394,   397,   401,   405,   406,   408,   410,   414,   415,   417,
     419,   423
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    55,    -1,    56,    -1,    55,    56,    -1,
      57,    -1,    63,    -1,    47,     5,    40,    58,    41,    60,
      -1,    47,     5,    40,    58,    41,    22,    67,    31,    -1,
      -1,    59,    -1,     5,    -1,    59,    32,     5,    -1,    42,
      61,    43,    -1,    -1,    61,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    20,    67,    31,    -1,    20,
      67,    12,    67,    31,    -1,    20,    31,    -1,    21,    31,
      -1,    21,    12,    67,    31,    -1,    67,    31,    -1,    67,
      12,    67,    31,    -1,    67,    13,    67,    31,    -1,    60,
      -1,     5,    19,    67,    31,    -1,     5,    34,    67,    31,
      -1,     5,    34,    67,    12,    67,    31,    -1,     5,    34,
      67,    13,    67,    31,    -1,    76,    34,    67,    31,    -1,
      76,    34,    67,    12,    67,    31,    -1,    76,    34,    67,
      13,    67,    31,    -1,     7,    60,    -1,     7,    12,    67,
      60,    -1,     8,     5,     9,    67,    60,    -1,    68,    -1,
      67,    46,    68,    -1,    67,    46,    82,    -1,    69,    -1,
      69,    10,    69,    11,    68,    -1,    70,    -1,    69,    15,
      70,    -1,    71,    -1,    70,    14,    71,    -1,    72,    -1,
      71,    25,    72,    -1,    71,    26,    72,    -1,    73,    -1,
      72,    29,    73,    -1,    72,    30,    73,    -1,    72,    27,
      73,    -1,    72,    28,    73,    -1,    74,    -1,    73,    35,
      74,    -1,    73,    36,    74,    -1,    75,    -1,    74,    37,
      75,    -1,    74,    38,    75,    -1,    74,    39,    75,    -1,
      76,    -1,    36,    75,    -1,    16,    75,    -1,    77,    -1,
      76,    44,    67,    45,    -1,    76,    24,     5,    -1,     3,
      -1,     4,    -1,     6,    -1,    17,    -1,    18,    -1,     5,
      -1,    49,    -1,    40,    67,    41,    -1,    78,    -1,    81,
      -1,    44,    85,    45,    -1,    50,    87,    51,    -1,     3,
      23,     3,    -1,     3,    23,     5,    -1,     3,    23,    40,
      67,    41,    -1,     5,    23,     3,    -1,     5,    23,     5,
      -1,     5,    23,    40,    67,    41,    -1,    40,    67,    41,
      23,     3,    -1,    40,    67,    41,    23,     5,    -1,    40,
      67,    41,    23,    40,    67,    41,    -1,    38,     5,    79,
      -1,    38,     5,    38,    -1,    38,     5,    -1,    38,    80,
      -1,    79,    38,    80,    -1,     3,    -1,     4,    -1,     6,
      -1,    17,    -1,    18,    -1,     5,    -1,    49,    -1,    36,
      80,    -1,    40,    67,    41,    -1,    80,    44,    67,    45,
      -1,    80,    24,     5,    -1,    48,    40,    58,    41,    22,
      67,    -1,    48,    40,    58,    41,    60,    -1,    42,    83,
      43,    -1,    84,    -1,    83,    84,    -1,    67,    22,    67,
      -1,    49,    22,    67,    -1,    -1,    86,    -1,    67,    -1,
      86,    32,    67,    -1,    -1,    88,    -1,    89,    -1,    88,
      32,    89,    -1,     5,    33,    67,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    67,    68,    72,    73,    78,    81,    87,
      88,    92,    93,    97,   101,   102,   106,   107,   108,   109,
     110,   111,   114,   115,   116,   117,   118,   119,   120,   124,
     128,   129,   132,   135,   136,   139,   145,   146,   150,   156,
     157,   158,   162,   163,   169,   170,   174,   175,   179,   180,
     181,   185,   186,   187,   188,   189,   193,   194,   195,   199,
     200,   201,   202,   206,   207,   208,   212,   213,   214,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   233,   236,   239,   242,   245,   248,   251,   254,
     261,   264,   268,   274,   275,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   294,   297,   303,   307,
     308,   312,   313,   317,   318,   322,   323,   332,   333,   337,
     338,   342
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
  "OBJ_OPEN", "OBJ_CLOSE", "UMINUS", "$accept", "program",
  "top_level_list", "top_level", "func_def", "param_list_opt",
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
     305,   306,   307
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    61,    61,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    63,
      64,    64,    64,    64,    64,    64,    65,    65,    66,    67,
      67,    67,    68,    68,    69,    69,    70,    70,    71,    71,
      71,    72,    72,    72,    72,    72,    73,    73,    73,    74,
      74,    74,    74,    75,    75,    75,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    78,    79,    79,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     6,     8,     0,
       1,     1,     3,     3,     0,     2,     1,     1,     1,     1,
       3,     5,     2,     2,     4,     2,     4,     4,     1,     4,
       4,     6,     6,     4,     6,     6,     2,     4,     5,     1,
       3,     3,     1,     5,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     2,     2,     1,     4,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       3,     3,     3,     5,     3,     3,     5,     5,     5,     7,
       3,     3,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     4,     3,     6,     5,     3,     1,
       2,     3,     3,     0,     1,     1,     3,     0,     1,     1,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     5,     6,     0,     0,
       1,     4,    69,    70,    74,    71,     0,    72,    73,     0,
       0,     0,   113,     0,    75,   117,     0,    39,    42,    44,
      46,    48,    51,    56,    59,    63,    66,    77,    78,     9,
       0,     0,    65,    64,    92,     0,   115,     0,   114,     9,
       0,     0,   118,   119,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,     0,    10,    81,    82,     0,    84,    85,
       0,    91,    90,    76,    79,     0,     0,     0,    80,     0,
       0,    40,    41,     0,    45,    47,    49,    50,    54,    55,
      52,    53,    57,    58,    60,    61,    62,    68,     0,     0,
       0,     0,     0,    95,    96,   100,    97,    98,    99,     0,
       0,   101,    93,     0,     0,   116,     0,   121,   120,    75,
       0,     0,   109,     0,    67,     0,    14,     7,    12,    83,
      86,   102,     0,     0,     0,    94,    87,    88,     0,     0,
     107,     0,     0,   108,   110,    43,     0,     0,   103,   105,
       0,     0,   106,   112,   111,     8,    74,     0,     0,     0,
       0,    13,    28,    15,    16,    17,    18,    19,     0,    63,
     104,    89,     0,     0,    36,     0,    22,     0,     0,    23,
       0,     0,    25,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,     0,     0,    30,    37,     0,     0,    24,
      26,    27,     0,     0,    33,     0,     0,    38,    21,     0,
       0,    31,    32,    34,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    73,    74,   137,   157,   173,
       7,   175,   176,   177,   130,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    82,   122,    38,    92,
     131,   132,    47,    48,    51,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
      -1,     1,    59,    94,    -1,  -126,  -126,  -126,   258,    74,
    -126,  -126,    82,  -126,   139,  -126,   258,  -126,  -126,   258,
     153,   258,   258,   128,  -126,   165,   -19,  -126,    52,   158,
      25,   163,     2,   164,  -126,    21,  -126,  -126,  -126,   179,
      20,    28,  -126,  -126,   185,    62,   148,   180,   192,   179,
     196,   182,   199,  -126,  -126,   129,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   258,
     230,   258,  -126,   195,   207,  -126,  -126,   258,  -126,  -126,
     258,    12,   202,   222,  -126,   258,   206,   258,  -126,   165,
     265,  -126,  -126,   100,   158,    25,   163,   163,     2,     2,
       2,     2,   164,   164,  -126,  -126,  -126,  -126,   141,    53,
     244,    85,   109,  -126,  -126,  -126,  -126,  -126,  -126,     4,
     258,  -126,    66,     4,    31,   148,    71,   148,  -126,   229,
     -11,   194,  -126,   258,  -126,   258,  -126,  -126,  -126,  -126,
    -126,    66,   118,   247,   258,    66,  -126,  -126,   258,   258,
    -126,   258,   258,  -126,  -126,  -126,    -5,    80,  -126,  -126,
     172,   135,   148,   148,   148,  -126,    83,     7,   248,   210,
      47,  -126,  -126,  -126,  -126,  -126,  -126,  -126,    35,    65,
    -126,  -126,   258,   258,  -126,   246,  -126,    -7,   258,  -126,
     258,   258,  -126,   258,    45,    79,   258,   258,  -126,    -3,
      73,   106,    61,   258,   258,  -126,  -126,    79,   107,  -126,
    -126,  -126,   258,   258,  -126,   108,   111,  -126,  -126,   117,
     120,  -126,  -126,  -126,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,   252,  -126,   208,  -126,  -125,  -126,  -126,
     110,  -126,  -126,  -126,    -8,   -53,   209,   215,   219,   160,
     145,   156,   -13,   116,  -126,  -126,  -126,    37,  -126,  -126,
    -126,   147,  -126,  -126,  -126,  -126,   177
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      26,   150,    91,    42,     1,   197,    43,   113,   114,   115,
     116,   152,    54,    45,    46,   113,   114,   115,   116,   183,
       8,   117,   118,    75,   198,    76,   165,    55,   209,   117,
     118,    78,   172,    79,   146,    55,   147,    65,    66,    55,
     119,    55,   184,    55,   120,    70,     2,   190,   191,   136,
      59,    60,   120,   121,   104,   105,   106,   203,   204,   188,
      77,   121,    56,   108,     9,    71,   192,    57,    80,   111,
     206,   148,   112,   212,   213,   135,   205,   125,   189,   127,
     155,    55,   217,    12,    13,   166,    15,   167,   168,    70,
     143,    55,   214,   149,    10,   136,    16,    17,    18,   193,
     169,   170,     8,    83,   210,    40,    41,    55,    55,    71,
     144,   133,   142,   136,    39,    57,    19,   182,    20,    55,
      21,   136,   136,   171,    22,    55,   139,   156,    23,    24,
      25,    55,    12,    13,    14,    15,   160,   211,   218,   221,
     161,   162,   222,   163,   164,    16,    17,    18,   223,   178,
     140,   224,    55,    55,    55,    55,   141,    55,    44,   158,
     145,   187,    41,    55,    55,    19,    55,    20,    49,    21,
      50,    90,    58,    22,   194,   195,   181,    23,    24,    25,
     199,    55,   200,   201,    72,   202,   134,    55,   207,   208,
      61,    62,    63,    64,    55,   215,   216,    12,    13,    14,
      15,    67,    68,    69,   219,   220,    98,    99,   100,   101,
      16,    17,    18,    12,    13,    14,    15,   180,    55,    96,
      97,   102,   103,    81,    85,    84,    16,    17,    18,    87,
      19,    89,    20,    88,    21,   107,   109,   153,    22,   110,
     123,   186,    23,   129,    25,   124,    19,   126,    20,   138,
      21,   151,   159,   185,    22,   196,    11,    86,    23,    24,
      25,    12,    13,    14,    15,    93,   128,   174,    12,    13,
      14,    15,    94,   179,    16,    17,    18,    95,   154,     0,
       0,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    19,     0,    20,     0,    21,     0,
       0,    19,    22,    20,     0,    21,    23,    24,    25,    22,
       0,     0,     0,    23,   129,    25
};

static const yytype_int16 yycheck[] =
{
       8,   126,    55,    16,     5,    12,    19,     3,     4,     5,
       6,    22,    31,    21,    22,     3,     4,     5,     6,    12,
      19,    17,    18,     3,    31,     5,    31,    46,    31,    17,
      18,     3,   157,     5,     3,    46,     5,    35,    36,    46,
      36,    46,   167,    46,    40,    24,    47,    12,    13,    42,
      25,    26,    40,    49,    67,    68,    69,    12,    13,    12,
      40,    49,    10,    71,     5,    44,    31,    15,    40,    77,
     195,    40,    80,    12,    13,    22,    31,    85,    31,    87,
     133,    46,   207,     3,     4,     5,     6,     7,     8,    24,
      24,    46,    31,    22,     0,    42,    16,    17,    18,    34,
      20,    21,    19,    41,    31,    23,    23,    46,    46,    44,
      44,    11,   120,    42,    40,    15,    36,    34,    38,    46,
      40,    42,    42,    43,    44,    46,    41,   135,    48,    49,
      50,    46,     3,     4,     5,     6,   144,    31,    31,    31,
     148,   149,    31,   151,   152,    16,    17,    18,    31,   157,
      41,    31,    46,    46,    46,    46,   119,    46,     5,    41,
     123,   169,    23,    46,    46,    36,    46,    38,    40,    40,
       5,    42,    14,    44,   182,   183,    41,    48,    49,    50,
     188,    46,   190,   191,     5,   193,    45,    46,   196,   197,
      27,    28,    29,    30,    46,   203,   204,     3,     4,     5,
       6,    37,    38,    39,   212,   213,    61,    62,    63,    64,
      16,    17,    18,     3,     4,     5,     6,    45,    46,    59,
      60,    65,    66,    38,    32,    45,    16,    17,    18,    33,
      36,    32,    38,    51,    40,     5,    41,    43,    44,    32,
      38,    31,    48,    49,    50,    23,    36,    41,    38,     5,
      40,    22,     5,     5,    44,     9,     4,    49,    48,    49,
      50,     3,     4,     5,     6,    56,    89,   157,     3,     4,
       5,     6,    57,   157,    16,    17,    18,    58,   131,    -1,
      -1,    16,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    40,    -1,
      -1,    36,    44,    38,    -1,    40,    48,    49,    50,    44,
      -1,    -1,    -1,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    47,    54,    55,    56,    57,    63,    19,     5,
       0,    56,     3,     4,     5,     6,    16,    17,    18,    36,
      38,    40,    44,    48,    49,    50,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    81,    40,
      23,    23,    75,    75,     5,    67,    67,    85,    86,    40,
       5,    87,    88,    89,    31,    46,    10,    15,    14,    25,
      26,    27,    28,    29,    30,    35,    36,    37,    38,    39,
      24,    44,     5,    58,    59,     3,     5,    40,     3,     5,
      40,    38,    79,    41,    45,    32,    58,    33,    51,    32,
      42,    68,    82,    69,    70,    71,    72,    72,    73,    73,
      73,    73,    74,    74,    75,    75,    75,     5,    67,    41,
      32,    67,    67,     3,     4,     5,     6,    17,    18,    36,
      40,    49,    80,    38,    23,    67,    41,    67,    89,    49,
      67,    83,    84,    11,    45,    22,    42,    60,     5,    41,
      41,    80,    67,    24,    44,    80,     3,     5,    40,    22,
      60,    22,    22,    43,    84,    68,    67,    61,    41,     5,
      67,    67,    67,    67,    67,    31,     5,     7,     8,    20,
      21,    43,    60,    62,    63,    64,    65,    66,    67,    76,
      45,    41,    34,    12,    60,     5,    31,    67,    12,    31,
      12,    13,    31,    34,    67,    67,     9,    12,    31,    67,
      67,    67,    67,    12,    13,    31,    60,    67,    67,    31,
      31,    31,    12,    13,    31,    67,    67,    60,    31,    67,
      67,    31,    31,    31,    31
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
#line 63 "parser.y"
    { ast_root = ast_new_program((yyvsp[(1) - (1)].list)); ;}
    break;

  case 3:
#line 67 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 4:
#line 68 "parser.y"
    { ast_list_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 5:
#line 72 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 6:
#line 73 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 7:
#line 78 "parser.y"
    {
        (yyval.node) = ast_new_function((yyvsp[(2) - (6)].sval), (yyvsp[(4) - (6)].list), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 8:
#line 81 "parser.y"
    {
        (yyval.node) = ast_new_function((yyvsp[(2) - (8)].sval), (yyvsp[(4) - (8)].list), ast_new_return((yyvsp[(7) - (8)].node)));
    ;}
    break;

  case 9:
#line 87 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 10:
#line 88 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 11:
#line 92 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), ast_new_param((yyvsp[(1) - (1)].sval))); ;}
    break;

  case 12:
#line 93 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), ast_new_param((yyvsp[(3) - (3)].sval))); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 13:
#line 97 "parser.y"
    { (yyval.node) = ast_new_block((yyvsp[(2) - (3)].list)); ;}
    break;

  case 14:
#line 101 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 15:
#line 102 "parser.y"
    { ast_list_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 16:
#line 106 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 17:
#line 107 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 18:
#line 108 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 19:
#line 109 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 20:
#line 110 "parser.y"
    { (yyval.node) = ast_new_return((yyvsp[(2) - (3)].node)); ;}
    break;

  case 21:
#line 111 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_return((yyvsp[(2) - (5)].node)), (yyvsp[(4) - (5)].node), 0); 
    ;}
    break;

  case 22:
#line 114 "parser.y"
    { (yyval.node) = ast_new_return(NULL); ;}
    break;

  case 23:
#line 115 "parser.y"
    { (yyval.node) = ast_new_break(NULL); ;}
    break;

  case 24:
#line 116 "parser.y"
    { (yyval.node) = ast_new_break((yyvsp[(3) - (4)].node)); ;}
    break;

  case 25:
#line 117 "parser.y"
    { (yyval.node) = ast_new_expr_stmt((yyvsp[(1) - (2)].node)); ;}
    break;

  case 26:
#line 118 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 0); ;}
    break;

  case 27:
#line 119 "parser.y"
    { (yyval.node) = ast_new_when_stmt((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node), 1); ;}
    break;

  case 28:
#line 120 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 29:
#line 124 "parser.y"
    { (yyval.node) = ast_new_var_decl((yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 30:
#line 128 "parser.y"
    { (yyval.node) = ast_new_assign(ast_new_identifier((yyvsp[(1) - (4)].sval)), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 31:
#line 129 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign(ast_new_identifier((yyvsp[(1) - (6)].sval)), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 0); 
    ;}
    break;

  case 32:
#line 132 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign(ast_new_identifier((yyvsp[(1) - (6)].sval)), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 1); 
    ;}
    break;

  case 33:
#line 135 "parser.y"
    { (yyval.node) = ast_new_assign((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 34:
#line 136 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 0); 
    ;}
    break;

  case 35:
#line 139 "parser.y"
    { 
        (yyval.node) = ast_new_when_stmt(ast_new_assign((yyvsp[(1) - (6)].node), (yyvsp[(3) - (6)].node)), (yyvsp[(5) - (6)].node), 1); 
    ;}
    break;

  case 36:
#line 145 "parser.y"
    { (yyval.node) = ast_new_loop(NULL, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 37:
#line 146 "parser.y"
    { (yyval.node) = ast_new_loop((yyvsp[(3) - (4)].node), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 38:
#line 150 "parser.y"
    {
        (yyval.node) = ast_new_for((yyvsp[(2) - (5)].sval), (yyvsp[(4) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 39:
#line 156 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 40:
#line 157 "parser.y"
    { (yyval.node) = ast_new_pipe((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 41:
#line 158 "parser.y"
    { (yyval.node) = ast_new_pipe((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 42:
#line 162 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 43:
#line 163 "parser.y"
    {
        (yyval.node) = ast_new_ternary((yyvsp[(3) - (5)].node), (yyvsp[(1) - (5)].node), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 44:
#line 169 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 45:
#line 170 "parser.y"
    { (yyval.node) = ast_new_binary(OP_OR, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 46:
#line 174 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 47:
#line 175 "parser.y"
    { (yyval.node) = ast_new_binary(OP_AND, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 48:
#line 179 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 49:
#line 180 "parser.y"
    { (yyval.node) = ast_new_binary(OP_EQ, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 50:
#line 181 "parser.y"
    { (yyval.node) = ast_new_binary(OP_NE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 51:
#line 185 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 52:
#line 186 "parser.y"
    { (yyval.node) = ast_new_binary(OP_LT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 53:
#line 187 "parser.y"
    { (yyval.node) = ast_new_binary(OP_GT, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 54:
#line 188 "parser.y"
    { (yyval.node) = ast_new_binary(OP_LE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 55:
#line 189 "parser.y"
    { (yyval.node) = ast_new_binary(OP_GE, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 56:
#line 193 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 57:
#line 194 "parser.y"
    { (yyval.node) = ast_new_binary(OP_ADD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 58:
#line 195 "parser.y"
    { (yyval.node) = ast_new_binary(OP_SUB, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 59:
#line 199 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 60:
#line 200 "parser.y"
    { (yyval.node) = ast_new_binary(OP_MUL, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 61:
#line 201 "parser.y"
    { (yyval.node) = ast_new_binary(OP_DIV, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 62:
#line 202 "parser.y"
    { (yyval.node) = ast_new_binary(OP_MOD, (yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 63:
#line 206 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 64:
#line 207 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NEG, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 65:
#line 208 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NOT, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 66:
#line 212 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 67:
#line 213 "parser.y"
    { (yyval.node) = ast_new_index((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 68:
#line 214 "parser.y"
    { (yyval.node) = ast_new_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 69:
#line 218 "parser.y"
    { (yyval.node) = ast_new_int_literal((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 70:
#line 219 "parser.y"
    { (yyval.node) = ast_new_float_literal((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 71:
#line 220 "parser.y"
    { (yyval.node) = ast_new_string_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 72:
#line 221 "parser.y"
    { (yyval.node) = ast_new_bool_literal(1); ;}
    break;

  case 73:
#line 222 "parser.y"
    { (yyval.node) = ast_new_bool_literal(0); ;}
    break;

  case 74:
#line 223 "parser.y"
    { (yyval.node) = ast_new_identifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 75:
#line 224 "parser.y"
    { (yyval.node) = ast_new_implicit(); ;}
    break;

  case 76:
#line 225 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 77:
#line 226 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 78:
#line 227 "parser.y"
    { (yyval.node) = (yyvsp[(1) - (1)].node); ;}
    break;

  case 79:
#line 228 "parser.y"
    { (yyval.node) = ast_new_array((yyvsp[(2) - (3)].list)); ;}
    break;

  case 80:
#line 229 "parser.y"
    { (yyval.node) = ast_new_object((yyvsp[(2) - (3)].list)); ;}
    break;

  case 81:
#line 230 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (3)].ival)), ast_new_int_literal((yyvsp[(3) - (3)].ival))); 
    ;}
    break;

  case 82:
#line 233 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (3)].ival)), ast_new_identifier((yyvsp[(3) - (3)].sval))); 
    ;}
    break;

  case 83:
#line 236 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_int_literal((yyvsp[(1) - (5)].ival)), (yyvsp[(4) - (5)].node)); 
    ;}
    break;

  case 84:
#line 239 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (3)].sval)), ast_new_int_literal((yyvsp[(3) - (3)].ival))); 
    ;}
    break;

  case 85:
#line 242 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (3)].sval)), ast_new_identifier((yyvsp[(3) - (3)].sval))); 
    ;}
    break;

  case 86:
#line 245 "parser.y"
    { 
        (yyval.node) = ast_new_range(ast_new_identifier((yyvsp[(1) - (5)].sval)), (yyvsp[(4) - (5)].node)); 
    ;}
    break;

  case 87:
#line 248 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (5)].node), ast_new_int_literal((yyvsp[(5) - (5)].ival))); 
    ;}
    break;

  case 88:
#line 251 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (5)].node), ast_new_identifier((yyvsp[(5) - (5)].sval))); 
    ;}
    break;

  case 89:
#line 254 "parser.y"
    { 
        (yyval.node) = ast_new_range((yyvsp[(2) - (7)].node), (yyvsp[(6) - (7)].node)); 
    ;}
    break;

  case 90:
#line 261 "parser.y"
    { 
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (3)].sval), (yyvsp[(3) - (3)].list)); 
    ;}
    break;

  case 91:
#line 264 "parser.y"
    { 
        /* /func/ with no args (trailing slash) */
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (3)].sval), ast_list_new()); 
    ;}
    break;

  case 92:
#line 268 "parser.y"
    { 
        (yyval.node) = ast_new_wand_call((yyvsp[(2) - (2)].sval), ast_list_new()); 
    ;}
    break;

  case 93:
#line 274 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 94:
#line 275 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 95:
#line 280 "parser.y"
    { (yyval.node) = ast_new_int_literal((yyvsp[(1) - (1)].ival)); ;}
    break;

  case 96:
#line 281 "parser.y"
    { (yyval.node) = ast_new_float_literal((yyvsp[(1) - (1)].fval)); ;}
    break;

  case 97:
#line 282 "parser.y"
    { (yyval.node) = ast_new_string_literal((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 98:
#line 283 "parser.y"
    { (yyval.node) = ast_new_bool_literal(1); ;}
    break;

  case 99:
#line 284 "parser.y"
    { (yyval.node) = ast_new_bool_literal(0); ;}
    break;

  case 100:
#line 285 "parser.y"
    { (yyval.node) = ast_new_identifier((yyvsp[(1) - (1)].sval)); ;}
    break;

  case 101:
#line 286 "parser.y"
    { (yyval.node) = ast_new_implicit(); ;}
    break;

  case 102:
#line 287 "parser.y"
    { (yyval.node) = ast_new_unary(OP_NEG, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 103:
#line 288 "parser.y"
    { (yyval.node) = (yyvsp[(2) - (3)].node); ;}
    break;

  case 104:
#line 289 "parser.y"
    { (yyval.node) = ast_new_index((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 105:
#line 290 "parser.y"
    { (yyval.node) = ast_new_member((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].sval)); ;}
    break;

  case 106:
#line 294 "parser.y"
    {
        (yyval.node) = ast_new_lambda((yyvsp[(3) - (6)].list), (yyvsp[(6) - (6)].node));
    ;}
    break;

  case 107:
#line 297 "parser.y"
    {
        (yyval.node) = ast_new_lambda((yyvsp[(3) - (5)].list), (yyvsp[(5) - (5)].node));
    ;}
    break;

  case 108:
#line 303 "parser.y"
    { (yyval.node) = ast_new_match((yyvsp[(2) - (3)].list)); ;}
    break;

  case 109:
#line 307 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 110:
#line 308 "parser.y"
    { ast_list_append((yyvsp[(1) - (2)].list), (yyvsp[(2) - (2)].node)); (yyval.list) = (yyvsp[(1) - (2)].list); ;}
    break;

  case 111:
#line 312 "parser.y"
    { (yyval.node) = ast_new_match_arm((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 112:
#line 313 "parser.y"
    { (yyval.node) = ast_new_match_arm(ast_new_implicit(), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 113:
#line 317 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 114:
#line 318 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 115:
#line 322 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 116:
#line 323 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 117:
#line 332 "parser.y"
    { (yyval.list) = ast_list_new(); ;}
    break;

  case 118:
#line 333 "parser.y"
    { (yyval.list) = (yyvsp[(1) - (1)].list); ;}
    break;

  case 119:
#line 337 "parser.y"
    { (yyval.list) = ast_list_new(); ast_list_append((yyval.list), (yyvsp[(1) - (1)].node)); ;}
    break;

  case 120:
#line 338 "parser.y"
    { ast_list_append((yyvsp[(1) - (3)].list), (yyvsp[(3) - (3)].node)); (yyval.list) = (yyvsp[(1) - (3)].list); ;}
    break;

  case 121:
#line 342 "parser.y"
    { (yyval.node) = ast_new_object_field((yyvsp[(1) - (3)].sval), (yyvsp[(3) - (3)].node)); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2344 "parser.tab.c"
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


#line 345 "parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Parse error at line %d: %s\n", yylineno, s);
}

