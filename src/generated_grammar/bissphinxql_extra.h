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

#ifndef YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_EXTRA_H_INCLUDED
# define YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_EXTRA_H_INCLUDED
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
    TOK_TABLE_IDENT = 261,         /* "tablename"  */
    TOK_QUOTED_STRING = 262,       /* "string"  */
    TOK_CREATE = 263,              /* TOK_CREATE  */
    TOK_COLUMNS = 264,             /* TOK_COLUMNS  */
    TOK_DATABASE = 265,            /* TOK_DATABASE  */
    TOK_FIELDS = 266,              /* TOK_FIELDS  */
    TOK_FLUSH = 267,               /* TOK_FLUSH  */
    TOK_FROM = 268,                /* TOK_FROM  */
    TOK_GLOBAL = 269,              /* TOK_GLOBAL  */
    TOK_LIKE = 270,                /* TOK_LIKE  */
    TOK_LOCK = 271,                /* TOK_LOCK  */
    TOK_READ = 272,                /* TOK_READ  */
    TOK_RELOAD = 273,              /* TOK_RELOAD  */
    TOK_SAVEPOINT = 274,           /* TOK_SAVEPOINT  */
    TOK_SESSION = 275,             /* TOK_SESSION  */
    TOK_SET = 276,                 /* TOK_SET  */
    TOK_SHOW = 277,                /* TOK_SHOW  */
    TOK_TABLE = 278,               /* TOK_TABLE  */
    TOK_TABLES = 279,              /* TOK_TABLES  */
    TOK_TRIGGERS = 280,            /* TOK_TRIGGERS  */
    TOK_UNLOCK = 281,              /* TOK_UNLOCK  */
    TOK_USE = 282,                 /* TOK_USE  */
    TOK_WITH = 283,                /* TOK_WITH  */
    TOK_WRITE = 284,               /* TOK_WRITE  */
    TOK_COMMENT = 285              /* TOK_COMMENT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (class SqlExtraParser_c * pParser);


#endif /* !YY_YY_HOME_DEV_SPATIALIX_SEARCHSERVICE_OUT_BUILD_LINUX_RELEASE_THIRDPARTY_MANTICORESEARCH_CONFIG_BISSPHINXQL_EXTRA_H_INCLUDED  */
