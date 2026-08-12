/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXEXPR_H_INCLUDED
# define YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXEXPR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    END = 0,                       /* "$end"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_CONST_INT = 258,           /* TOK_CONST_INT  */
    TOK_CONST_FLOAT = 259,         /* TOK_CONST_FLOAT  */
    TOK_CONST_STRING = 260,        /* TOK_CONST_STRING  */
    TOK_SUBKEY = 261,              /* TOK_SUBKEY  */
    TOK_DOT_NUMBER = 262,          /* TOK_DOT_NUMBER  */
    TOK_ATTR_INT = 263,            /* TOK_ATTR_INT  */
    TOK_ATTR_BITS = 264,           /* TOK_ATTR_BITS  */
    TOK_ATTR_FLOAT = 265,          /* TOK_ATTR_FLOAT  */
    TOK_ATTR_MVA32 = 266,          /* TOK_ATTR_MVA32  */
    TOK_ATTR_MVA64 = 267,          /* TOK_ATTR_MVA64  */
    TOK_ATTR_STRING = 268,         /* TOK_ATTR_STRING  */
    TOK_ATTR_FACTORS = 269,        /* TOK_ATTR_FACTORS  */
    TOK_IF = 270,                  /* TOK_IF  */
    TOK_FUNC = 271,                /* TOK_FUNC  */
    TOK_FUNC_IN = 272,             /* TOK_FUNC_IN  */
    TOK_FUNC_INTERVAL = 273,       /* TOK_FUNC_INTERVAL  */
    TOK_FUNC_RAND = 274,           /* TOK_FUNC_RAND  */
    TOK_FUNC_REMAP = 275,          /* TOK_FUNC_REMAP  */
    TOK_FUNC_PF = 276,             /* TOK_FUNC_PF  */
    TOK_FUNC_JA = 277,             /* TOK_FUNC_JA  */
    TOK_FUNC_DATE = 278,           /* TOK_FUNC_DATE  */
    TOK_FUNC_SECOND = 279,         /* TOK_FUNC_SECOND  */
    TOK_FUNC_MINUTE = 280,         /* TOK_FUNC_MINUTE  */
    TOK_FUNC_HOUR = 281,           /* TOK_FUNC_HOUR  */
    TOK_FUNC_DAY = 282,            /* TOK_FUNC_DAY  */
    TOK_FUNC_WEEK = 283,           /* TOK_FUNC_WEEK  */
    TOK_FUNC_MONTH = 284,          /* TOK_FUNC_MONTH  */
    TOK_FUNC_QUARTER = 285,        /* TOK_FUNC_QUARTER  */
    TOK_FUNC_YEAR = 286,           /* TOK_FUNC_YEAR  */
    TOK_USERVAR = 287,             /* TOK_USERVAR  */
    TOK_UDF = 288,                 /* TOK_UDF  */
    TOK_HOOK_IDENT = 289,          /* TOK_HOOK_IDENT  */
    TOK_HOOK_FUNC = 290,           /* TOK_HOOK_FUNC  */
    TOK_IDENT = 291,               /* TOK_IDENT  */
    TOK_TABLE_NAME = 292,          /* TOK_TABLE_NAME  */
    TOK_ATTR_JSON = 293,           /* TOK_ATTR_JSON  */
    TOK_FIELD = 294,               /* TOK_FIELD  */
    TOK_COLUMNAR_INT = 295,        /* TOK_COLUMNAR_INT  */
    TOK_COLUMNAR_TIMESTAMP = 296,  /* TOK_COLUMNAR_TIMESTAMP  */
    TOK_COLUMNAR_BIGINT = 297,     /* TOK_COLUMNAR_BIGINT  */
    TOK_COLUMNAR_BOOL = 298,       /* TOK_COLUMNAR_BOOL  */
    TOK_COLUMNAR_FLOAT = 299,      /* TOK_COLUMNAR_FLOAT  */
    TOK_COLUMNAR_STRING = 300,     /* TOK_COLUMNAR_STRING  */
    TOK_COLUMNAR_UINT32SET = 301,  /* TOK_COLUMNAR_UINT32SET  */
    TOK_COLUMNAR_INT64SET = 302,   /* TOK_COLUMNAR_INT64SET  */
    TOK_COLUMNAR_FLOATVEC = 303,   /* TOK_COLUMNAR_FLOATVEC  */
    TOK_ATWEIGHT = 304,            /* TOK_ATWEIGHT  */
    TOK_GROUPBY = 305,             /* TOK_GROUPBY  */
    TOK_WEIGHT = 306,              /* TOK_WEIGHT  */
    TOK_COUNT = 307,               /* TOK_COUNT  */
    TOK_DISTINCT = 308,            /* TOK_DISTINCT  */
    TOK_CONST_LIST = 309,          /* TOK_CONST_LIST  */
    TOK_ATTR_SINT = 310,           /* TOK_ATTR_SINT  */
    TOK_MAP_ARG = 311,             /* TOK_MAP_ARG  */
    TOK_FOR = 312,                 /* TOK_FOR  */
    TOK_ITERATOR = 313,            /* TOK_ITERATOR  */
    TOK_IS = 314,                  /* TOK_IS  */
    TOK_NULL = 315,                /* TOK_NULL  */
    TOK_IS_NULL = 316,             /* TOK_IS_NULL  */
    TOK_IS_NOT_NULL = 317,         /* TOK_IS_NOT_NULL  */
    TOK_OR = 318,                  /* TOK_OR  */
    TOK_AND = 319,                 /* TOK_AND  */
    TOK_EQ = 320,                  /* TOK_EQ  */
    TOK_NE = 321,                  /* TOK_NE  */
    TOK_LTE = 322,                 /* TOK_LTE  */
    TOK_GTE = 323,                 /* TOK_GTE  */
    TOK_DIV = 324,                 /* TOK_DIV  */
    TOK_MOD = 325,                 /* TOK_MOD  */
    TOK_NOT = 326,                 /* TOK_NOT  */
    TOK_NEG = 327                  /* TOK_NEG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxexpr.y"

	int64_t			iConst;			// constant value
	float			fConst;			// constant value
	uint64_t		iAttrLocator;	// attribute locator (rowitem for int/float; offset+size for bits)
	int				iFunc;			// function id
	int				iNode;			// node, or uservar, or udf index
	int				iTrailingBr;	// TOKEN = 0, TOKEN( = 1, TOKEN  ( = 2 - whether lexer token has trailing bracket
	const char *	sIdent;			// generic identifier (token does NOT own ident storage; ie values are managed by parser)

#line 146 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxexpr.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (ExprParser_t * pParser);


#endif /* !YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXEXPR_H_INCLUDED  */
