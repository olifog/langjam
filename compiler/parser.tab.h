/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 165 "parser.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

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

extern YYLTYPE yylloc;
