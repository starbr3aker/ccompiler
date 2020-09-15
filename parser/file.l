%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	
	int nesting = 0;
	#define TERM_RED	"\x1b[31m"
	#define TERM_GRN	"\x1b[32m"
	#define TERM_YLW	"\x1b[33m"
	#define TERM_BLU	"\x1b[34m"
	#define TERM_MGT	"\x1b[35m"
	#define TERM_CYN	"\x1b[36m"
	#define TERM_DEF	"\x1b[0m"
	#define tablesize 	1007

	struct symboltable
	{
		char name[20];
		char class[20];
		char type[20];
		char value[20];
		int lineno;
		int nesting;
		int length;
	}ST[tablesize];

	struct constanttable
	{
		char name[20];
		char type[20];
		int length;
		int nesting;
	}CT[tablesize];

	int hash(char *str)
	{
		int value = 0;
		for(int i = 0 ; i < strlen(str) ; i++)
		{
			value = 10*value + (str[i] - 'A');
			value = value % tablesize;
			while(value < 0)
				value = value + tablesize;
		}
		return value;
	}

	int lookupST(char *str)
	{
		int value = hash(str);
		if(ST[value].length == 0)
		{
			return 0;
		}
		else if(strcmp(ST[value].name,str)==0)
		{	
			return 1;
		}
		else
		{
			for(int i = value + 1 ; i!=value ; i = (i+1)%tablesize)
			{
				if(strcmp(ST[i].name,str)==0)
				{
					return 1;
				}
			}
			return 0;
		}
	}

	int lookupCT(char *str)
	{
		int value = hash(str);
		if(CT[value].length == 0)
			return 0;
		else if(strcmp(CT[value].name,str)==0)
			return 1;
		else
		{
			for(int i = value + 1 ; i!=value ; i = (i+1)%tablesize)
			{
				if(strcmp(CT[i].name,str)==0)
				{
					return 1;
				}
			}
			return 0;
		}
	}

	void insertST(char *str1, char *str2)
	{
		if(lookupST(str1))
		{
			return;
		}
		else
		{
			int value = hash(str1);
			if(ST[value].length == 0)
			{
				strcpy(ST[value].name,str1);
				strcpy(ST[value].class,str2);
				ST[value].length = strlen(str1);
				ST[value].nesting=nesting;
				insertSTline(str1,yylineno);
				return;
			}

			int pos = 0;

			for (int i = value + 1 ; i!=value ; i = (i+1)%tablesize)
			{
				if(ST[i].length == 0)
				{
					pos = i;
					break;
				}
			}

			strcpy(ST[pos].name,str1);
			strcpy(ST[pos].class,str2);
			ST[pos].length = strlen(str1);
		}
	}

	void insertSTtype(char *str1, char *str2)
	{
		for(int i = 0 ; i < tablesize ; i++)
		{
			if(strcmp(ST[i].name,str1)==0)
			{
				strcpy(ST[i].type,str2);
			}
		}
    }

	void insertSTvalue(char *str1, char *str2)
	{
		for(int i = 0 ; i < tablesize ; i++)
		{
			if(strcmp(ST[i].name,str1)==0)
			{
				strcpy(ST[i].value,str2);
			}
		}
	}

	void insertSTline(char *str1, int line)
	{
		for(int i = 0 ; i < tablesize ; i++)
		{
			if(strcmp(ST[i].name,str1)==0)
			{
				ST[i].lineno = line;
			}
		}
	}

	void insertCT(char *str1, char *str2)
	{
		if(lookupCT(str1))
			return;
		else
		{
			int value = hash(str1);
			if(CT[value].length == 0)
			{
				strcpy(CT[value].name,str1);
				strcpy(CT[value].type,str2);
				CT[value].length = strlen(str1);
				CT[value].nesting = nesting;
				return;
			}

			int pos = 0;

			for (int i = value + 1 ; i!=value ; i = (i+1)%tablesize)
			{
				if(CT[i].length == 0)
				{
					pos = i;
					break;
				}
			}

			strcpy(CT[pos].name,str1);
			strcpy(CT[pos].type,str2);
			CT[pos].length = strlen(str1);
		}
	}

	void printST()
	{
		printf("%10s | %15s | %10s | %15s | %10s | %10s\n","SYMBOL", "CLASS", "TYPE","VALUE", "LINE NO", "NESTING");
		for(int i=0;i<81;i++) {
			printf("-");
		}
		printf("\n");
		for(int i = 0 ; i < tablesize ; i++)
		{
			if(ST[i].length == 0)
			{
				continue;
			}
			printf("%10s | %15s | %10s | %15s | %10d | %10d\n",ST[i].name, ST[i].class, ST[i].type, ST[i].value, ST[i].lineno, ST[i].nesting);
		}
    }


	void printCT()
	{
		printf("%15s | %15s | %10s\n","NAME", "TYPE", "NESTING");
		for(int i=0;i<81;i++) {
			printf("-");
		}
		printf("\n");
		for(int i = 0 ; i < tablesize ; i++)
		{
			if(CT[i].length == 0)
				continue;

			printf("%15s | %15s  | %10d\n",CT[i].name, CT[i].type, CT[i].nesting);
		}
	}
	char curid[20];
	char curtype[20];
	char curval[20];

%}

DE "define"
IN "include"

%%
\n 	{yylineno++;}
([#][" "]*({IN})[ ]*([<]?)([A-Za-z]+)[.]?([A-Za-z]*)([>]?))/["\n"|\/|" "|"\t"]	{ }
([#][" "]*({DE})[" "]*([A-Za-z]+)(" ")*[0-9]+)/["\n"|\/|" "|"\t"]				{ } 
\/\/(.*)																		{ }
\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/										{ }
[ \n\t] ;
";"				{ return(';'); }
","				{ return(','); }
("{")			{ nesting++; 	return('{'); }
("}")			{ nesting--;	return('}'); }
"("				{ return('('); }
")"				{ return(')'); }
("["|"<:")		{ return('['); }
("]"|":>") 		{ return(']'); }
":"				{ return(':'); }
"."				{ return('.'); }

"auto"			{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return AUTO; }
"extern"		{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return EXTERN; }
"register"		{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return REGISTER; }
"static"		{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return STATIC; }

"int"			{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return INT;}
"char"			{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return CHAR;}
"float"			{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return FLOAT;}
"double"		{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return DOUBLE;}
"void"			{ strcpy(curtype,yytext); insertST(yytext, "keyword"); return VOID;}


"long"			{ strcpy(curtype,yytext); insertST(yytext, "keyword");  return LONG;}
"short"			{ strcpy(curtype,yytext); insertST(yytext, "keyword");  return SHORT;}
"signed"		{ strcpy(curtype,yytext); insertST(yytext, "keyword");  return SIGNED;}
"unsigned"		{ insertST(yytext, "keyword");  return UNSIGNED;}

"if"			{ insertST(yytext, "keyword"); return IF;}
"else"			{ insertSTline(yytext, yylineno); insertST(yytext, "keyword"); return ELSE;}

"while"			{ insertST(yytext, "keyword"); return WHILE;}
"do"			{ insertST(yytext, "keyword"); return DO;}
"for"			{ insertST(yytext, "keyword"); return FOR;}

"break"			{ insertST(yytext, "keyword"); return BREAK;}
"continue"		{ insertST(yytext, "keyword"); return CONTINUE;}
"return"		{ insertST(yytext, "keyword");  return RETURN;}

"sizeof" 		{ insertST(yytext, "keyword");  return SIZEOF;}
"struct"		{ strcpy(curtype,yytext); insertST(yytext, "keyword");  return STRUCT;}


"++"			{ return increment_operator; }
"--"			{ return decrement_operator; }
"<<"			{ return leftshift_operator; }
">>"			{ return rightshift_operator; }
"<="			{ return leq_operator; }
"<"				{ return le_operator; }
">="			{ return geq_operator; }
">"				{ return ge_operator; }
"=="			{ return equality_operator; }
"!="			{ return inequality_operator; }
"&&"			{ return AND_operator; }
"||"			{ return OR_operator; }
"^"				{ return caret_operator; }
"*="			{ return multiplication_assignment_operator; }
"/="			{ return division_assignment_operator; }
"%="			{ return modulo_assignment_operator; }
"+="			{ return addition_assignment_operator; }
"-="			{ return subtraction_assignment_operator; }
"&"				{ return amp_operator; }
"!"				{ return exclamation_operator; }
"~"				{ return tilde_operator; }
"-"				{ return subtract_operator; }
"+"				{ return add_operator; }
"*"				{ return multiplication_operator; }
"/"				{ return division_operator; }
"%"				{ return modulo_operator; }
"|"				{ return pipe_operator; }
"="				{ return assignment_operator;}

\"[^\n]*\"/[;|,|\)] 			{strcpy(curval,yytext); insertCT(yytext,"string constant"); return string_constant;}
\'[A-Z|a-z]\'/[;|,|\)|:] 		{strcpy(curval,yytext); insertCT(yytext,"character constant"); return character_constant;}
[a-z|A-Z]([a-z|A-Z]|[0-9])*/\[ 	{strcpy(curid,yytext); insertST(yytext, "array Identifier");  return identifier;}
[1-9][0-9]*|0/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\]|\}|:|\n|\t|\^] 	{strcpy(curval,yytext); insertCT(yytext, "number constant"); return integer_constant;}
([0-9]*)\.([0-9]+)/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\n|\t|\^] 	{strcpy(curval,yytext); insertCT(yytext, "floating constant"); return float_constant;}
[A-Za-z_][A-Za-z_0-9]* {strcpy(curid,yytext);insertST(yytext,"identifier");  return identifier;}

(.?) {
		if(yytext[0]=='#')
		{
			printf("Error in Pre-Processor directive at line no. %d\n",yylineno);
		}
		else if(yytext[0]=='/')
		{
			printf("ERR_UNMATCHED_COMMENT at line no. %d\n",yylineno);
		}
		else if(yytext[0]=='"')
		{
			printf("ERR_INCOMPLETE_STRING at line no. %d\n",yylineno);
		}
		else
		{
			printf("ERROR at line no. %d\n",yylineno);
		}
		printf("%s\n", yytext);
		return 0;
}

%%
