/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    INT = 258,
    CHAR = 259,
    FLOAT = 260,
    DOUBLE = 261,
    LONG = 262,
    SHORT = 263,
    SIGNED = 264,
    UNSIGNED = 265,
    STRUCT = 266,
    RETURN = 267,
    MAIN = 268,
    AUTO = 269,
    REGISTER = 270,
    EXTERN = 271,
    STATIC = 272,
    VOID = 273,
    WHILE = 274,
    FOR = 275,
    DO = 276,
    BREAK = 277,
    CONTINUE = 278,
    ENDIF = 279,
    identifier = 280,
    integer_constant = 281,
    string_constant = 282,
    float_constant = 283,
    character_constant = 284,
    IF = 285,
    ELSE = 286,
    modulo_assignment_operator = 287,
    multiplication_assignment_operator = 288,
    division_assignment_operator = 289,
    addition_assignment_operator = 290,
    subtraction_assignment_operator = 291,
    assignment_operator = 292,
    OR_operator = 293,
    AND_operator = 294,
    pipe_operator = 295,
    caret_operator = 296,
    amp_operator = 297,
    equality_operator = 298,
    inequality_operator = 299,
    leq_operator = 300,
    le_operator = 301,
    geq_operator = 302,
    ge_operator = 303,
    leftshift_operator = 304,
    rightshift_operator = 305,
    add_operator = 306,
    subtract_operator = 307,
    multiplication_operator = 308,
    division_operator = 309,
    modulo_operator = 310,
    SIZEOF = 311,
    tilde_operator = 312,
    exclamation_operator = 313,
    increment_operator = 314,
    decrement_operator = 315
  };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define FLOAT 260
#define DOUBLE 261
#define LONG 262
#define SHORT 263
#define SIGNED 264
#define UNSIGNED 265
#define STRUCT 266
#define RETURN 267
#define MAIN 268
#define AUTO 269
#define REGISTER 270
#define EXTERN 271
#define STATIC 272
#define VOID 273
#define WHILE 274
#define FOR 275
#define DO 276
#define BREAK 277
#define CONTINUE 278
#define ENDIF 279
#define identifier 280
#define integer_constant 281
#define string_constant 282
#define float_constant 283
#define character_constant 284
#define IF 285
#define ELSE 286
#define modulo_assignment_operator 287
#define multiplication_assignment_operator 288
#define division_assignment_operator 289
#define addition_assignment_operator 290
#define subtraction_assignment_operator 291
#define assignment_operator 292
#define OR_operator 293
#define AND_operator 294
#define pipe_operator 295
#define caret_operator 296
#define amp_operator 297
#define equality_operator 298
#define inequality_operator 299
#define leq_operator 300
#define le_operator 301
#define geq_operator 302
#define ge_operator 303
#define leftshift_operator 304
#define rightshift_operator 305
#define add_operator 306
#define subtract_operator 307
#define multiplication_operator 308
#define division_operator 309
#define modulo_operator 310
#define SIZEOF 311
#define tilde_operator 312
#define exclamation_operator 313
#define increment_operator 314
#define decrement_operator 315

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
