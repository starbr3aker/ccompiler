%option yylineno
%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"

	#define ANSI_COLOR_RED		"\x1b[31m"
	#define ANSI_COLOR_GREEN	"\x1b[32m"
	#define ANSI_COLOR_YELLOW	"\x1b[33m"
	#define ANSI_COLOR_BLUE		"\x1b[34m"
	#define ANSI_COLOR_MAGENTA	"\x1b[35m"
	#define ANSI_COLOR_CYAN		"\x1b[36m"
	#define ANSI_COLOR_RESET	"\x1b[0m"

	struct symboltable
	{
		char name[100];
		char class[100];
		char type[100];
		char value[100];
		int initnestval;
		int nestval;
		int lineno;
		int length;
		int params_count;
		int brackets;
		char params_types[100][100];
	}ST[1001];

	struct constanttable
	{
		char name[100];
		char type[100];
		int length;
	}CT[1001];
/*
	struct proc_decl
	{
		char name[100];
		char lineno;
		int params_count;
		char params_types[100][100];
		char ret_type[100];
	}PT[1001];
	*/
	int currnest = 0;
	//int params_count = 0;
	//int call_params_count = 0;
	extern int yylval;
	int arrbrackets = 0;
	int totbrackets = 0;

	int hash(char *str)
	{
		int value = 0,i;
		for(i = 0 ; i < strlen(str) ; i++)
		{
			value = 10*value + (str[i] - 'A');
			value = value % 1001;
			while(value < 0)
				value = value + 1001;
		}
		return value;
	}

	int getbrackets(char *str1){
		int value = hash(str1);
		if(ST[value].length == 0)
			return 12;
		if(strcmp(ST[value].name,str1)==0)
			return ST[value].brackets;
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,str1)==0)
				{
					return ST[i].brackets;
				}
			}
			return 13;
		}
	}

	void setbrackets(char *str1, int brackets){
		int i;
		for(i = 0 ; i < 1001 ; i++)
		{
			if(strcmp(ST[i].name,str1)==0 )
			{
				ST[i].brackets = brackets;
				return;
			}
		}
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

			return value;
		}
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,str)==0)
				{

					return i;
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
			int i;	
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(CT[i].name,str)==0)
				{
					return 1;
				}
			}
			return 0;
		}
	}


	void insertSTline(char *str1, int line)
	{
		int value = hash(str1);
		if(strcmp(ST[value].name,str1)==0)
			ST[value].lineno = line;
		else
		{
			int i;	
			for(i = (value + 1) ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,str1)==0)
				{
					ST[i].lineno = line;
				}
			}
		}
	}

	void insertSTparamstype(char *str1, char *str2)
	{
		int value = hash(str1);
	    if(strcmp(ST[value].name,str1)==0)
			{
				int j;
				for(j=0;j<100;j++)
				{
					if(ST[value].params_types[j][0]=='\0')
					{
						strcpy(ST[value].params_types[j],str2);
						break;
					}
				}
			}
		else
		{
			int i,j;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,str1)==0)
				{
					int j;
					for(j=0;j<100;j++)
					{
						if(ST[i].params_types[j][0]=='\0')
						{
							strcpy(ST[i].params_types[j],str2);
							break;
						}
					}
				}
			}
		}

	}

	int check_params_type(char *str, char types[100][100], int n)
	{
		int value = hash(str),j,k;
	    if(strcmp(ST[value].name,str)==0)
			{
				for(j=0;j<n;j++)
				{
					if(strcmp(ST[value].params_types[j],types[j]))
					{
						/*
						for(k=0;k<n;k++)
						{
							printf("\n%s\n",ST[value].params_types[j]);
						}
						printf("\n%s....%s....%s....%d\n",ST[value].name,ST[value].params_types[j],types[j],j);
						*/
						return 0;
					}
				}
			}
		else
		{
			int i,j;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,str)==0)
				{
					for(j=0;j<n;j++)
					{
						if(strcmp(ST[i].params_types[j],types[j]))
						{
							/*
							for(int k=0;k<n;k++)
							{
								printf("\n%s\n",ST[i].params_types[j]);
							}
							printf("\n%s....%s....%s....%d\n",ST[i].name,ST[i].params_types[j],types[j],j);
							*/
							return 0;
						}
					}
				}
			}
		}


		return 1;
	}

	void insertST(char *str1, char *str2)
	{
		if(lookupST(str1))
		{
			if(strcmp(ST[lookupST(str1)].class,"Identifier")==0 && strcmp(str2,"Array Identifier")==0)
			{
				printf("Error use of array\n");
				exit(0);
			}
			return;
		}
		else
		{
			int value = hash(str1);
			if(ST[value].length == 0)
			{
				int j;
				strcpy(ST[value].name,str1);
				strcpy(ST[value].class,str2);
				ST[value].length = strlen(str1);
				ST[value].initnestval = 9999;
				ST[value].nestval = 9999;
				ST[value].params_count = -1;
				insertSTline(str1,yylineno);
				for(j=0;j<100;j++)
					ST[value].params_types[j][0] = '\0';
				return;
			}

			int pos = 0,i;

			for (i = value + 1 ; i!=value ; i = (i+1)%1001)
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
			ST[pos].initnestval = 9999;
			ST[pos].nestval = 9999;
			ST[pos].params_count = -1;
			int j;
			for(j=0;j<100;j++)
				ST[value].params_types[j][0] = '\0';
		}
	}

	void insertSTtype(char *str1, char *str2)
	{
		int value = hash(str1);
		if(strcmp(ST[value].name,str1)==0)
			strcpy(ST[value].type,str2);
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,str1)==0)
				{
					strcpy(ST[i].type,str2);
				}
			}
		}


    }

	void insertSTvalue(char *str1, char *str2)
	{
		int value = hash(str1);
		if(strcmp(ST[value].name,str1)==0 && ST[value].nestval == currnest)
			strcpy(ST[value].value,str2);
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,str1)==0 && ST[i].nestval == currnest)
				{
					strcpy(ST[i].value,str2);
				}
			}
		}

	}


	void insertSTnest(char *s, int nest)
	{
		if(lookupST(s) && ST[lookupST(s)].nestval != 9999)
		{
             int pos = 0;
             int value = hash(s);
             int i;
			for (i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(ST[i].length == 0)
				{
					pos = i;
					break;
				}
			}

			strcpy(ST[pos].name,s);
			strcpy(ST[pos].class,"Identifier");
			ST[pos].length = strlen(s);
			ST[pos].initnestval = nest;
			ST[pos].nestval = nest;
			ST[pos].params_count = -1;
			ST[pos].lineno = yylineno;
		}
		else
		{
			int i;
			for(i = 0 ; i < 1001 ; i++)
			{
				if(strcmp(ST[i].name,s)==0 )
				{
					ST[i].initnestval = nest;
					ST[i].nestval = nest;
				}
			}
		}
	}

	void insertSTparamscount(char *s, int count)
	{
		int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
			ST[value].params_count = count;
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					ST[i].params_count = count;
				}
			}
		}

	}

	int getSTparamscount(char *s)
	{
		int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
			return ST[value].params_count;
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					return ST[i].params_count;
				}
			}
		}

		return -2;
	}

	void insertSTF(char *s)
	{
		int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
			strcpy(ST[value].class,"Function");
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					strcpy(ST[i].class,"Function");
				}
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
				return;
			}

			int pos = 0,i;

			for (i = value + 1 ; i!=value ; i = (i+1)%1001)
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

	void deletedata (int nesting)
	{
		int i;
		for(i = 0 ; i < 1001 ; i++)
		{
			if(ST[i].nestval == nesting)
			{
				ST[i].nestval = 99999;
			}
		}


	}


	int checkscope(char *s)
	{
		int flag = 0,i;
		for(i = 0 ; i < 1000 ; i++)
		{
			if(strcmp(ST[i].name,s)==0)
			{
				if(ST[i].nestval > currnest)
				{
					flag = 1;
				}
				else
				{
					flag = 0;
					break;
				}
			}
		}
		if(!flag)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	int check_id_is_func(char *s)
	{
		int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
		{
			if(strcmp(ST[value].class,"Function")==0)
					return 1;
		}
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					if(strcmp(ST[i].class,"Function")==0);
					return 1;
				}
			}
		}
		return 0;
	}

	int checkarray(char *s)
	{
		int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
			{
				if(strcmp(ST[value].class,"Array Identifier")==0)
				{
					return 0;
				}
			}
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					if(strcmp(ST[i].class,"Array Identifier")==0)
					{
						return 0;
					}
				}
			}
		}

		return 1;
	}

	int duplicate(char *s)
	{
		int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
			{
				if(ST[value].nestval == currnest)
				{
			        return 1;
				}
			}
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					if(ST[i].nestval == currnest)
					{
						return 1;
					}
				}
			}
		}

		return 0;
	}

	int check_duplicate(char* str)
	{
		int value = hash(str);
		if(strcmp(ST[value].name, str) == 0 && strcmp(ST[value].class, "Function") == 0)
			{
				printf("Function redeclaration not allowed\n");
				exit(0);
			}
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name, str) == 0 && strcmp(ST[i].class, "Function") == 0)
				{
					printf("Function redeclaration not allowed\n");
					exit(0);
				}
			}
		}

	}

	int check_declaration(char* str, char *check_type)
	{
		int value = hash(str);
		if(strcmp(ST[value].name, str) == 0 && strcmp(ST[value].class, "Function") == 0 || strcmp(ST[value].name,"printf")==0 )
				return 1;
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name, str) == 0 && strcmp(ST[i].class, "Function") == 0 || strcmp(ST[i].name,"printf")==0)
				{
                    return 1;
    			}
			}
		}

		return 0;
	}

	int check_params(char* type_specifier)
	{
		if(!strcmp(type_specifier, "void"))
		{
			printf("Parameters cannot be of type void\n");
			exit(0);
		}
		return 0;
	}

	char gettype(char *s, int flag)
	{
		int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
			return ST[value].type[0];
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					return ST[i].type[0];
				}
			}
		}

	}

	char *gettypestr(char *s)
	{	int value = hash(s);
		if(strcmp(ST[value].name,s)==0)
			return ST[value].type;
		else
		{
			int i;
			for(i = value + 1 ; i!=value ; i = (i+1)%1001)
			{
				if(strcmp(ST[i].name,s)==0)
				{
					return ST[i].type;
				}
			}
		}

	}

	void printST()
	{
		int i;
		printf("%10s | %15s | %10s | %10s | %10s | %15s | %10s |\n","SYMBOL", "CLASS", "TYPE","VALUE", "LINE NO", "NESTING", "PARAMS COUNT");
		for(i=0;i<100;i++) {
			printf("-");
		}
		printf("\n");
		for(i = 0 ; i < 1001 ; i++)
		{
			if(ST[i].length == 0)
			{
				continue;
			}
			printf("%10s | %15s | %10s | %10s | %10d | %15d | %10d |\n",ST[i].name, ST[i].class, ST[i].type, ST[i].value, ST[i].lineno, ST[i].initnestval, ST[i].params_count);
		}
		for(i=0;i<1001;i++)
		{
			if(!strcmp(ST[i].class,"Function"))
			{
				int j;
				printf("\n%s : ",ST[i].name);
				for(j=0;j<ST[i].params_count;j++)
				{
					printf(" %s ",ST[i].params_types[j]);
				}
			}
		}
    }


	void printCT()
	{
		int i;
		printf("%10s | %15s\n","NAME", "TYPE");
		for(i=0;i<81;i++) {
			printf("-");
		}
		printf("\n");
		for(i = 0 ; i < 1001 ; i++)
		{
			if(CT[i].length == 0)
				continue;

			printf("%10s | %15s\n",CT[i].name, CT[i].type);
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
("{")			{ return('{'); }
("}")			{ return('}'); }
"("				{ return('('); }
")"				{ return(')'); }
("["|"<:")		{ return('['); }
("]"|":>") 		{ return(']'); }
":"				{ return(':'); }
"."				{ return('.'); }

"char"			{ strcpy(curtype,yytext); insertST(yytext, "Keyword");return CHAR;}
"double"		{ strcpy(curtype,yytext); insertST(yytext, "Keyword"); return DOUBLE;}
"else"			{ insertST(yytext, "Keyword"); return ELSE;}
"float"			{ strcpy(curtype,yytext); insertST(yytext, "Keyword"); return FLOAT;}
"while"			{ insertST(yytext, "Keyword"); return WHILE;}
"do"			{ insertST(yytext, "Keyword"); return DO;}
"for"			{ insertST(yytext, "Keyword"); return FOR;}
"if"			{ insertST(yytext, "Keyword"); return IF;}
"int"			{ strcpy(curtype,yytext); insertST(yytext, "Keyword"); return INT;}
"long"			{ strcpy(curtype,yytext); insertST(yytext, "Keyword"); return LONG;}
"return"		{ insertST(yytext, "Keyword"); return RETURN;}
"short"			{ strcpy(curtype,yytext); insertST(yytext, "Keyword"); return SHORT;}
"signed"		{ strcpy(curtype,yytext); insertST(yytext, "Keyword"); return SIGNED;}
"sizeof" 		{ insertST(yytext, "Keyword"); return SIZEOF;}
"struct"		{ strcpy(curtype,yytext);   insertST(yytext, "Keyword");  return STRUCT;}
"unsigned"		{ insertST(yytext, "Keyword");   return UNSIGNED;}
"void"			{ strcpy(curtype,yytext);   insertST(yytext, "Keyword");  return VOID;}
"break"			{ insertST(yytext, "Keyword");  return BREAK;}



"++"			{ return increment_operator; }
"--"			{ return decrement_operator; }
"<<"			{ return leftshift_operator; }
">>"			{ return rightshift_operator; }
"<="			{ return lessthan_assignment_operator; }
"<"				{ return lessthan_operator; }
">="			{ return greaterthan_assignment_operator; }
">"				{ return greaterthan_operator; }
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
"<<="			{ return leftshift_assignment_operator; }
">>="			{ return rightshift_assignment_operator; }
"&="			{ return AND_assignment_operator; }
"^="			{ return XOR_assignment_operator; }
"|="			{ return OR_assignment_operator; }
"&"				{ return amp_operator; }
"!"				{ return exclamation_operator; }
"~"				{ return tilde_operator; }
"-"				{ return subtract_operator; }
"+"				{ return add_operator; }
"*"				{ return multiplication_operator; }
"/"				{ return division_operator; }
"%"				{ return modulo_operator; }
"|"				{ return pipe_operator; }
\=				{ return assignment_operator;}

\"[^\n]*\"/[;|,|\)] 			{strcpy(curval,yytext); insertCT(yytext,"String Constant"); return string_constant;}
\'[A-Z|a-z]\'/[;|,|\)|:] 		{strcpy(curval,yytext); insertCT(yytext,"Character Constant"); return character_constant;}
\'\\[0-9|A-Z|a-z]\'/[;|,|\)|:] 		{strcpy(curval,yytext); insertCT(yytext,"Character Constant"); return character_constant;}
[a-z|A-Z]([a-z|A-Z]|[0-9])*/\[ 	{strcpy(curid,yytext); insertST(yytext, "Array Identifier");  return array_identifier;}
[1-9][0-9]*|0/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\]|\}|:|\n|\t|\^] 	{strcpy(curval,yytext); insertCT(yytext, "Number Constant"); yylval = atoi(yytext); return integer_constant;}
([0-9]*)\.([0-9]+)/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\n|\t|\^] 	{strcpy(curval,yytext); insertCT(yytext, "Floating Constant"); return float_constant;}
[A-Za-z_][A-Za-z_0-9]* {strcpy(curid,yytext); insertST(curid,"Identifier"); return identifier;}
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
