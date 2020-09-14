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
    IF = 258,
    INT = 259,
    CHAR = 260,
    FLOAT = 261,
    DOUBLE = 262,
    LONG = 263,
    SHORT = 264,
    SIGNED = 265,
    UNSIGNED = 266,
    STRUCT = 267,
    RETURN = 268,
    MAIN = 269,
    VOID = 270,
    WHILE = 271,
    FOR = 272,
    DO = 273,
    BREAK = 274,
    CONTINUE = 275,
    ENDIF = 276,
    identifier = 277,
    integer_constant = 278,
    string_constant = 279,
    float_constant = 280,
    character_constant = 281,
    ELSE = 282,
    leftshift_assignment_operator = 283,
    rightshift_assignment_operator = 284,
    XOR_assignment_operator = 285,
    OR_assignment_operator = 286,
    AND_assignment_operator = 287,
    modulo_assignment_operator = 288,
    multiplication_assignment_operator = 289,
    division_assignment_operator = 290,
    addition_assignment_operator = 291,
    subtraction_assignment_operator = 292,
    assignment_operator = 293,
    OR_operator = 294,
    AND_operator = 295,
    pipe_operator = 296,
    caret_operator = 297,
    amp_operator = 298,
    equality_operator = 299,
    inequality_operator = 300,
    leq_operator = 301,
    le_operator = 302,
    geq_operator = 303,
    ge_operator = 304,
    leftshift_operator = 305,
    rightshift_operator = 306,
    add_operator = 307,
    subtract_operator = 308,
    multiplication_operator = 309,
    division_operator = 310,
    modulo_operator = 311,
    SIZEOF = 312,
    tilde_operator = 313,
    exclamation_operator = 314,
    increment_operator = 315,
    decrement_operator = 316
  };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define CONTINUE 275
#define ENDIF 276
#define identifier 277
#define integer_constant 278
#define string_constant 279
#define float_constant 280
#define character_constant 281
#define ELSE 282
#define leftshift_assignment_operator 283
#define rightshift_assignment_operator 284
#define XOR_assignment_operator 285
#define OR_assignment_operator 286
#define AND_assignment_operator 287
#define modulo_assignment_operator 288
#define multiplication_assignment_operator 289
#define division_assignment_operator 290
#define addition_assignment_operator 291
#define subtraction_assignment_operator 292
#define assignment_operator 293
#define OR_operator 294
#define AND_operator 295
#define pipe_operator 296
#define caret_operator 297
#define amp_operator 298
#define equality_operator 299
#define inequality_operator 300
#define leq_operator 301
#define le_operator 302
#define geq_operator 303
#define ge_operator 304
#define leftshift_operator 305
#define rightshift_operator 306
#define add_operator 307
#define subtract_operator 308
#define multiplication_operator 309
#define division_operator 310
#define modulo_operator 311
#define SIZEOF 312
#define tilde_operator 313
#define exclamation_operator 314
#define increment_operator 315
#define decrement_operator 316

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
