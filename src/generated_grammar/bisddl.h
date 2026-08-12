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

#ifndef YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISDDL_H_INCLUDED
# define YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISDDL_H_INCLUDED
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
    TOK_IDENT = 258,               /* "identifier"  */
    TOK_TABLEIDENT = 259,          /* "tablename"  */
    TOK_CONST_FLOAT = 260,         /* "float"  */
    TOK_CONST_INT = 261,           /* "integer"  */
    TOK_QUOTED_STRING = 262,       /* "string"  */
    TOK_ADD = 263,                 /* TOK_ADD  */
    TOK_ALTER = 264,               /* TOK_ALTER  */
    TOK_API_KEY = 265,             /* TOK_API_KEY  */
    TOK_AS = 266,                  /* TOK_AS  */
    TOK_AT = 267,                  /* TOK_AT  */
    TOK_ATTRIBUTE = 268,           /* TOK_ATTRIBUTE  */
    TOK_BIGINT = 269,              /* TOK_BIGINT  */
    TOK_BIT = 270,                 /* TOK_BIT  */
    TOK_BOOL = 271,                /* TOK_BOOL  */
    TOK_CACHE_PATH = 272,          /* TOK_CACHE_PATH  */
    TOK_CLUSTER = 273,             /* TOK_CLUSTER  */
    TOK_COLUMN = 274,              /* TOK_COLUMN  */
    TOK_COLUMNAR = 275,            /* TOK_COLUMNAR  */
    TOK_CREATE = 276,              /* TOK_CREATE  */
    TOK_DOUBLE = 277,              /* TOK_DOUBLE  */
    TOK_DROP = 278,                /* TOK_DROP  */
    TOK_ENGINE = 279,              /* TOK_ENGINE  */
    TOK_EXISTS = 280,              /* TOK_EXISTS  */
    TOK_FAST_FETCH = 281,          /* TOK_FAST_FETCH  */
    TOK_FLOAT = 282,               /* TOK_FLOAT  */
    TOK_FLOAT_VECTOR = 283,        /* TOK_FLOAT_VECTOR  */
    TOK_FROM = 284,                /* TOK_FROM  */
    TOK_FUNCTION = 285,            /* TOK_FUNCTION  */
    TOK_HASH = 286,                /* TOK_HASH  */
    TOK_HNSW_EF_CONSTRUCTION = 287, /* TOK_HNSW_EF_CONSTRUCTION  */
    TOK_HNSW_M = 288,              /* TOK_HNSW_M  */
    TOK_HNSW_SIMILARITY = 289,     /* TOK_HNSW_SIMILARITY  */
    TOK_IF = 290,                  /* TOK_IF  */
    TOK_IMPORT = 291,              /* TOK_IMPORT  */
    TOK_INDEXED = 292,             /* TOK_INDEXED  */
    TOK_INT = 293,                 /* TOK_INT  */
    TOK_INTEGER = 294,             /* TOK_INTEGER  */
    TOK_JOIN = 295,                /* TOK_JOIN  */
    TOK_JSON = 296,                /* TOK_JSON  */
    TOK_KILLLIST_TARGET = 297,     /* TOK_KILLLIST_TARGET  */
    TOK_KNN = 298,                 /* TOK_KNN  */
    TOK_KNN_DIMS = 299,            /* TOK_KNN_DIMS  */
    TOK_KNN_TYPE = 300,            /* TOK_KNN_TYPE  */
    TOK_LIKE = 301,                /* TOK_LIKE  */
    TOK_MODEL_NAME = 302,          /* TOK_MODEL_NAME  */
    TOK_MODIFY = 303,              /* TOK_MODIFY  */
    TOK_MODIFY_COLUMN = 304,       /* TOK_MODIFY_COLUMN  */
    TOK_MULTI = 305,               /* TOK_MULTI  */
    TOK_MULTI64 = 306,             /* TOK_MULTI64  */
    TOK_MVA = 307,                 /* "mva"  */
    TOK_MVA64 = 308,               /* "mva64"  */
    TOK_NOT = 309,                 /* TOK_NOT  */
    TOK_OPTION = 310,              /* TOK_OPTION  */
    TOK_PLUGIN = 311,              /* TOK_PLUGIN  */
    TOK_QUANTIZATION = 312,        /* TOK_QUANTIZATION  */
    TOK_REBUILD = 313,             /* TOK_REBUILD  */
    TOK_RECONFIGURE = 314,         /* TOK_RECONFIGURE  */
    TOK_RETURNS = 315,             /* TOK_RETURNS  */
    TOK_RTINDEX = 316,             /* TOK_RTINDEX  */
    TOK_SECONDARY = 317,           /* TOK_SECONDARY  */
    TOK_SECONDARY_INDEX = 318,     /* TOK_SECONDARY_INDEX  */
    TOK_SONAME = 319,              /* TOK_SONAME  */
    TOK_STORED = 320,              /* TOK_STORED  */
    TOK_STRING = 321,              /* TOK_STRING  */
    TOK_TABLE = 322,               /* TOK_TABLE  */
    TOK_TEXT = 323,                /* TOK_TEXT  */
    TOK_TIMESTAMP = 324,           /* TOK_TIMESTAMP  */
    TOK_TYPE = 325,                /* TOK_TYPE  */
    TOK_UINT = 326,                /* TOK_UINT  */
    TOK_UPDATE = 327,              /* TOK_UPDATE  */
    TOK_USE_GPU = 328              /* TOK_USE_GPU  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (DdlParser_c * pParser);


#endif /* !YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISDDL_H_INCLUDED  */
