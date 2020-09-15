%{
	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void ins();
	void insV();
	int flag=0;

	#define TERM_RED	"\x1b[31m"
	#define TERM_GRN	"\x1b[32m"
	#define TERM_YLW	"\x1b[33m"
	#define TERM_BLU	"\x1b[34m"
	#define TERM_MGT	"\x1b[35m"
	#define TERM_CYN	"\x1b[36m"
	#define TERM_DEF	"\x1b[0m"

	extern char curid[20];
	extern char curtype[20];
	extern char curval[20];

%}

%token INT CHAR FLOAT DOUBLE LONG SHORT SIGNED UNSIGNED STRUCT
%token RETURN MAIN
%token AUTO 
%token REGISTER
%token EXTERN
%token STATIC
%token VOID
%token WHILE FOR DO 
%token BREAK CONTINUE
%token ENDIF
%expect 2

%token identifier
%token integer_constant string_constant float_constant character_constant

%nonassoc IF
%nonassoc ELSE

%right modulo_assignment_operator
%right multiplication_assignment_operator division_assignment_operator
%right addition_assignment_operator subtraction_assignment_operator
%right assignment_operator

%left OR_operator
%left AND_operator
%left pipe_operator
%left caret_operator
%left amp_operator
%left equality_operator inequality_operator
%left leq_operator le_operator geq_operator ge_operator
%left leftshift_operator rightshift_operator 
%left add_operator subtract_operator
%left multiplication_operator division_operator modulo_operator

%right SIZEOF
%right tilde_operator exclamation_operator
%left increment_operator decrement_operator 


%start code

%%
code
			: decl_list;

decl_list
			: decl D 

D
			: decl_list
			| ;

decl
			: var_decl 
			| funct_decl
			| struct_decl;

var_decl
			: type_specifier var_decl_list ';' 
			| structure_decl;

var_decl_list
			: var_decl_identifier V;

V
			: ',' var_decl_list 
			| ;

var_decl_identifier 
			: identifier { ins(); } var_decl_identification;

var_decl_identification
			: identifier_array_type 
			| assignment_operator expression ; 

identifier_array_type
			: '[' initialization_params
			| ;

initialization_params
			: integer_constant ']' initialization
			| ']' string_initialization;

initialization
			: string_initialization
			| array_initialization
			| ;

storage_class_specifier
			: AUTO 
			| STATIC
			| EXTERN
			| REGISTER 
			| ;

type_specifier 
			: storage_class_specifier type_spec
			| VOID ;

type_spec 
			: INT 
			| CHAR 
			| FLOAT 
			| DOUBLE 
			| LONG long_grammar 
			| SHORT short_grammar
			| UNSIGNED unsigned_grammar 
			| SIGNED signed_grammar
			;


unsigned_grammar 
			: INT 
			| LONG long_grammar 
			| SHORT short_grammar 
			| ;

signed_grammar 
			: INT | LONG long_grammar | SHORT short_grammar | ;

long_grammar 
			: INT | ;

short_grammar 
			: INT | ;

struct_decl
			: STRUCT identifier { ins(); } '{' V1  '}' ';';

V1 : var_decl V1 | ;

structure_decl 
			: STRUCT identifier var_decl_list;


funct_decl
			: funct_decl_type funct_decl_params;

funct_decl_type
			: type_specifier identifier '('  { ins();};

funct_decl_params
			: params ')' stmt;

params 
			: parameters_list | ;

parameters_list 
			: type_specifier parameters_identifier_list;

parameters_identifier_list 
			: param_identifier parameters_identifier_list_parts;

parameters_identifier_list_parts
			: ',' parameters_list 
			| ;

param_identifier 
			: identifier { ins(); } param_identifier_parts;

param_identifier_parts
			: '[' ']'
			| ;

stmt 
			: expression_stmt 
			| compound_stmt 
			| conditional_stmt
			| iterative_stmt
			| flow_stmt
			| var_decl;

compound_stmt 
			: '{' statement_list '}' ;

statement_list 
			: stmt statement_list 
			| ;

expression_stmt 
			: expression ';' 
			| ';' ;

conditional_stmt 
			: IF '(' simple_expression ')' stmt conditional_stmt_parts;

conditional_stmt_parts
			: ELSE stmt
			| ;

iterative_stmt 
			: WHILE '(' simple_expression ')' stmt 
			| FOR '(' expression ';' simple_expression ';' expression ')' 
			| DO stmt WHILE '(' simple_expression ')' ';';

flow_stmt
			: CONTINUE ';'
			| BREAK ';'
			| RETURN ';'
			| RETURN expression ';'

string_initialization
			: assignment_operator string_constant { insV(); };

array_initialization
			: assignment_operator '{' array_int_decl '}';

array_int_decl
			: integer_constant array_int_decl_parts;

array_int_decl_parts
			: ',' array_int_decl 
			| ;

expression 
			: mutable expression_parts
			| simple_expression ;

expression_parts
			: assignment_operator expression 
			| addition_assignment_operator expression 
			| subtraction_assignment_operator expression 
			| multiplication_assignment_operator expression 
			| division_assignment_operator expression 
			| modulo_assignment_operator expression 
			| increment_operator 
			| decrement_operator ;

simple_expression 
			: and_expression simple_expression_parts;

simple_expression_parts 
			: OR_operator and_expression simple_expression_parts | ;

and_expression 
			: unary_relation_expression and_expression_parts;

and_expression_parts
			: AND_operator unary_relation_expression and_expression_parts
			| ;

unary_relation_expression 
			: exclamation_operator unary_relation_expression 
			| regular_expression ;

regular_expression 
			: sum_expression regular_expression_parts;

regular_expression_parts
			: relational_operators sum_expression 
			| ;

relational_operators 
			: geq_operator 
			| leq_operator 
			| ge_operator 
			| le_operator 
			| equality_operator 
			| inequality_operator ;

sum_expression 
			: sum_expression sum_operators term 
			| term ;

sum_operators 
			: add_operator 
			| subtract_operator ;

term		: factor Ax;

Ax			: MULOP factor Ax 
			| ;

MULOP 
			: multiplication_operator 
			| division_operator 
			| modulo_operator ;

factor 
			: immutable 
			| mutable ;


mutable		: identifier Bx;

Bx			: mutable_parts Bx
			| ;

mutable_parts
			: '[' expression ']' 
			| '.' identifier;

immutable 
			: '(' expression ')' 
			| call | constant;

call
			: identifier '(' arguments ')';

arguments 
			: arguments_list | ;

arguments_list 
			: expression E;

E
			: ',' expression E
			| ;

constant 
			: integer_constant 		{ insV(); } 
			| string_constant		{ insV(); } 
			| float_constant		{ insV(); } 
			| character_constant	{ insV(); };

%%

extern FILE *yyin;
extern int yylineno;
extern int nesting;
extern char *yytext;
void insertSTtype(char *,char *);
void insertSTvalue(char *, char *);
void incertCT(char *, char *);
void printST();
void printCT();

int main(int argc , char **argv)
{
	yyin = fopen(argv[1], "r");
	yyparse();

	if(flag == 0)
	{
		printf(TERM_GRN "Parsing completed succesfully" TERM_DEF "\n");
		printf(TERM_CYN "SYMBOL TABLE" TERM_DEF "\n", " ");

		printST();

		printf("\n\n" TERM_CYN "CONSTANT TABLE" TERM_DEF "\n");
		printCT();
	}
}

void yyerror(char *s)
{
	printf("%d %s %s\n", yylineno, s, yytext);
	flag=1;
	printf(TERM_RED "Parsing Failed: Invalid input\n" TERM_DEF);
}

void ins()
{
	insertSTtype(curid,curtype);
}

void insV()
{
	insertSTvalue(curid,curval);
}

int yywrap()
{
	return 1;
}