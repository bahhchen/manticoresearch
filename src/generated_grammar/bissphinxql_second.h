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

#ifndef YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_SECOND_H_INCLUDED
# define YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_SECOND_H_INCLUDED
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
    TOK_CONST_FLOAT = 258,         /* TOK_CONST_FLOAT  */
    TOK_CONST_INT = 259,           /* TOK_CONST_INT  */
    TOK_IDENT = 260,               /* "identifier"  */
    TOK_OFF = 261,                 /* TOK_OFF  */
    TOK_ON = 262,                  /* TOK_ON  */
    TOK_QUOTED_STRING = 263,       /* "string"  */
    TOK_DOT_NUMBER = 264,          /* ".number"  */
    TOK_ATTACH = 265,              /* TOK_ATTACH  */
    TOK_ATTRIBUTES = 266,          /* TOK_ATTRIBUTES  */
    TOK_BACKTICKED_SUBKEY = 267,   /* TOK_BACKTICKED_SUBKEY  */
    TOK_BAD_NUMERIC = 268,         /* TOK_BAD_NUMERIC  */
    TOK_CACHE = 269,               /* TOK_CACHE  */
    TOK_CLUSTER = 270,             /* TOK_CLUSTER  */
    TOK_COMMITTED = 271,           /* TOK_COMMITTED  */
    TOK_COMPRESS = 272,            /* TOK_COMPRESS  */
    TOK_DELETE = 273,              /* TOK_DELETE  */
    TOK_DROP = 274,                /* TOK_DROP  */
    TOK_FLUSH = 275,               /* TOK_FLUSH  */
    TOK_FREEZE = 276,              /* TOK_FREEZE  */
    TOK_GLOBAL = 277,              /* TOK_GLOBAL  */
    TOK_HOSTNAMES = 278,           /* TOK_HOSTNAMES  */
    TOK_INDEX = 279,               /* "index"  */
    TOK_INDEXES = 280,             /* "indexes"  */
    TOK_ISOLATION = 281,           /* TOK_ISOLATION  */
    TOK_KILL = 282,                /* TOK_KILL  */
    TOK_LEVEL = 283,               /* TOK_LEVEL  */
    TOK_LIKE = 284,                /* TOK_LIKE  */
    TOK_LOGS = 285,                /* TOK_LOGS  */
    TOK_OPTION = 286,              /* TOK_OPTION  */
    TOK_QUERY = 287,               /* TOK_QUERY  */
    TOK_RAMCHUNK = 288,            /* TOK_RAMCHUNK  */
    TOK_READ = 289,                /* TOK_READ  */
    TOK_RECONFIGURE = 290,         /* TOK_RECONFIGURE  */
    TOK_REPEATABLE = 291,          /* TOK_REPEATABLE  */
    TOK_RTINDEX = 292,             /* "rtindex"  */
    TOK_SERIALIZABLE = 293,        /* TOK_SERIALIZABLE  */
    TOK_SESSION = 294,             /* TOK_SESSION  */
    TOK_SET = 295,                 /* TOK_SET  */
    TOK_SYSVAR = 296,              /* "@@sysvar"  */
    TOK_TABLE = 297,               /* "table"  */
    TOK_TABLES = 298,              /* "tables"  */
    TOK_TO = 299,                  /* TOK_TO  */
    TOK_TRANSACTION = 300,         /* TOK_TRANSACTION  */
    TOK_UNCOMMITTED = 301,         /* TOK_UNCOMMITTED  */
    TOK_UNFREEZE = 302,            /* TOK_UNFREEZE  */
    TOK_USERVAR = 303,             /* "@uservar"  */
    TOK_WAIT = 304,                /* TOK_WAIT  */
    TOK_WITH = 305,                /* TOK_WITH  */
    TOK_FROM = 306,                /* TOK_FROM  */
    TOK_PLUGINS = 307,             /* TOK_PLUGINS  */
    TOK_RELOAD = 308,              /* TOK_RELOAD  */
    TOK_SONAME = 309,              /* TOK_SONAME  */
    TOK_TRUNCATE = 310,            /* TOK_TRUNCATE  */
    TOK_SYSTEM_DOT = 311           /* "system."  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (class SqlSecondParser_c * pParser);


#endif /* !YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_SECOND_H_INCLUDED  */
