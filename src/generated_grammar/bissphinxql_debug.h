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

#ifndef YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_DEBUG_H_INCLUDED
# define YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_DEBUG_H_INCLUDED
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
    TOK_QUOTED_STRING = 258,       /* TOK_QUOTED_STRING  */
    TOK_CONST_FLOAT = 259,         /* TOK_CONST_FLOAT  */
    TOK_CONST_INT = 260,           /* TOK_CONST_INT  */
    TOK_USEC_INT = 261,            /* TOK_USEC_INT  */
    TOK_IDENT = 262,               /* TOK_IDENT  */
    TOK_USERVAR = 263,             /* TOK_USERVAR  */
    TOK_SYSVAR = 264,              /* TOK_SYSVAR  */
    TOK_ON = 265,                  /* TOK_ON  */
    TOK_OFF = 266,                 /* TOK_OFF  */
    TOK_INTO = 267,                /* TOK_INTO  */
    TOK_FROM = 268,                /* TOK_FROM  */
    TOK_CHUNK = 269,               /* TOK_CHUNK  */
    TOK_STATUS = 270,              /* TOK_STATUS  */
    TOK_DEBUG = 271,               /* TOK_DEBUG  */
    TOK_SHUTDOWN = 272,            /* TOK_SHUTDOWN  */
    TOK_CRASH = 273,               /* TOK_CRASH  */
    TOK_TOKEN = 274,               /* TOK_TOKEN  */
    TOK_MALSTATS = 275,            /* TOK_MALSTATS  */
    TOK_MALTRIM = 276,             /* TOK_MALTRIM  */
    TOK_PROCDUMP = 277,            /* TOK_PROCDUMP  */
    TOK_SETGDB = 278,              /* TOK_SETGDB  */
    TOK_SLEEP = 279,               /* TOK_SLEEP  */
    TOK_TASKS = 280,               /* TOK_TASKS  */
    TOK_SCHED = 281,               /* TOK_SCHED  */
    TOK_MERGE = 282,               /* TOK_MERGE  */
    TOK_DROP = 283,                /* TOK_DROP  */
    TOK_FILES = 284,               /* TOK_FILES  */
    TOK_OPTION = 285,              /* TOK_OPTION  */
    TOK_CLOSE = 286,               /* TOK_CLOSE  */
    TOK_COMPRESS = 287,            /* TOK_COMPRESS  */
    TOK_DEDUP = 288,               /* TOK_DEDUP  */
    TOK_SPLIT = 289,               /* TOK_SPLIT  */
    TOK_WAIT = 290,                /* TOK_WAIT  */
    TOK_LIKE = 291,                /* TOK_LIKE  */
    TOK_META = 292,                /* TOK_META  */
    TOK_TRACE = 293,               /* TOK_TRACE  */
    TOK_CURL = 294,                /* TOK_CURL  */
    TOK_PAUSE = 295                /* TOK_PAUSE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "/home/dev/spatialix/searchservice/thirdparty/manticoresearch/src/sphinxql_debug.y"

	int64_t iValue;
	float fValue;
	BlobLocator_t sValue;

#line 110 "/home/dev/spatialix/searchservice/out/build/linux-release/thirdparty/manticoresearch/config/bissphinxql_debug.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (class SqlDebugParser_c * pParser);


#endif /* !YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_DEBUG_H_INCLUDED  */
