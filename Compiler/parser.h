/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison interface for Yacc-like parsers in C

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
    WHERE = 318
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
