%{
	#include <stdio.h>
	#include <string.h>


	struct symtable
	{
		char name[100];
		char type[100];
		int length;
	}symt[1001];

	struct consttable
	{
		char name[100];
		char type[100];
		int length;
	}constt[1001];



	int searchSYMT(char *str)
	{
        int val = 0;
		for(int i = 0 ; i < strlen(str) ; i++)
		{
			val = 10*val + (str[i] - 'A');
			val = val % 1001;
			while(val < 0)
				val = val + 1001;
		}
		if(symt[val].length == 0)
		{
			return 0;
		}
		else if(strcmp(symt[val].name,str)==0)
		{
			return 1;
		}
		else
		{
			for(int i = val + 1 ; i!=val ; i = (i+1)%1001)
	    	{
	    		if(strcmp(symt[i].name,str)==0)
	    		{
	    			return 1;
	    		}
	    	}
	    	return 0;
	    }
	}

	int searchCONSTT(char *str)
	{
        int val = 0;
		for(int i = 0 ; i < strlen(str) ; i++)
		{
			val = 10*val + (str[i] - 'A');
			val = val % 1001;
			while(val < 0)
				val = val + 1001;
		}

		if(constt[val].length == 0) return 0;
		else if(strcmp(constt[val].name,str)==0) return 1;
		else
		{
			for(int i = val + 1 ; i!=val ; i = (i+1)%1001)
			{
				if(strcmp(constt[i].name,str)==0)
				{
					return 1;
				}
			}
			return 0;
		}
	}

	void insSYMT(char *str1, char *str2)
	{
		if(searchSYMT(str1))
		{
		    return;
	    }
		else
		{
			int val = 0;
		    for(int i = 0 ; i < strlen(str1) ; i++)
		    {
			    val = 10*val + (str1[i] - 'A');
			    val = val % 1001;
			    while(val < 0)
				    val = val + 1001;
		    }

			if(symt[val].length == 0)
			{
				strcpy(symt[val].name,str1);
				strcpy(symt[val].type,str2);
				symt[val].length = strlen(str1);
				return;
			}

			int pos = 0;

			for (int i = val + 1 ; i!=val ; i = (i+1)%1001)
			{
				if(symt[i].length == 0)
				{
					pos = i;
					break;
				}
			}

			strcpy(symt[pos].name,str1);
			strcpy(symt[pos].type,str2);
			symt[pos].length = strlen(str1);
		}
	}

	void insCONSTT(char *str1, char *str2)
	{
		if(searchCONSTT(str1))
			return;
		else
		{
            int val = 0;
		    for(int i = 0 ; i < strlen(str1) ; i++)
		    {
			    val = 10*val + (str1[i] - 'A');
			    val = val % 1001;
			    while(val < 0)
				    val = val + 1001;
		    }
		//return val;
			if(constt[val].length == 0)
			{
				strcpy(constt[val].name,str1);
				strcpy(constt[val].type,str2);
			  constt[val].length = strlen(str1);
				return;
			}

			int pos = 0;

			for (int i = val + 1 ; i!=val ; i = (i+1)%1001)
			{
				if(constt[i].length == 0)
				{
					pos = i;
					break;
				}
			}

			strcpy(constt[pos].name,str1);
			strcpy(constt[pos].type,str2);
			constt[pos].length = strlen(str1);
		}
	}

	void showSYMTT()
	{
		for(int i = 0 ; i < 1001 ; i++)
		{
			if(symt[i].length == 0)
			{
				continue;
			}

			printf("%s\t%s\n",symt[i].name, symt[i].type);
		}
	}

	void showCONSTT()
	{
		for(int i = 0 ; i < 1001 ; i++)
		{
			if(constt[i].length == 0)
				continue;

			printf("%s\t%s\n",constt[i].name, constt[i].type);
		}
	}

%}

DE "define"
IN "include"

operator [[<][=]|[>][=]|[=][=]|[!][=]|[>]|[<]|[\|][\|]|[&][&]|[\!]|[=]|[\^]|[\+][=]|[\-][=]|[\*][=]|[\/][=]|[\%][=]|[\+][\+]|[\-][\-]|[\+]|[\-]|[\*]|[\/]|[\%]|[&]|[\|]|[~]|[<][<]|[>][>]]


%%
\n   {yylineno++;}

([#][" "]*({IN})[ ]*([<]?)([A-Za-z]+)[.]?([A-Za-z]*)([>]?))/["\n"|\/|" "|"\t"] {printf("%s \t-Pre Processor directive\n",yytext);}	//Matches #include<stdio.h>

([#][" "]*({DE})[" "]*([A-Za-z]+)(" ")*[0-9]+)/["\n"|\/|" "|"\t"] {printf("%s \t-Macro\n",yytext);} //Matches macro

\/\/(.*) {printf("%s \t- Single-line comment\n", yytext);}

\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/  {printf("%s \t- Multi-line comment\n", yytext);}

[ \n\t] ;

; {printf("%s \t- Semicolon\n", yytext);}

, {printf("%s \t- Comma\n", yytext);}

\{ {printf("%s \t- Opening braces\n", yytext);}

\} {printf("%s \t- Closing braces\n", yytext);}


\( {printf("%s \t- Opening round brackets\n", yytext);}

\) {printf("%s \t- Closing round brackets\n", yytext);}

\[ {printf("%s \t- Opening square brackets\n", yytext);}

\] {printf("%s \t- Closing square brackets\n", yytext);}

\: {printf("%s \t- Colon\n", yytext);}

\\ {printf("%s \t- Forward slash\n", yytext);}

\. {printf("%s \t- Dot\n", yytext);}

auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while|main/[\(|" "|\{|;|:|"\n"|"\t"] {printf("%s \t- Keyword\n", yytext); insSYMT(yytext, "KEYWORD");}

\"[^\n]*\"/[;|,|\)] {printf("%s \t- String constant\n", yytext); insCONSTT(yytext,"STRING CONST");}

\'[A-Z|a-z|0-9]\'/[;|,|\)|:] {printf("%s \t- Character constant\n", yytext); insCONSTT(yytext,"CHAR CONST");}

[a-z|A-Z]([a-z|A-Z]|[0-9])*/\[ {printf("%s \t- Array identifier\n", yytext); insSYMT(yytext, "IDENTIFIER");}

{operator}/[a-z]|[0-9]|;|" "|[A-Z]|\(|\"|\'|\)|\n|\t {printf("%s \t- Operator\n", yytext);}

[1-9][0-9]*|0/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\]|\}|:|\n|\t|\^] {printf("%s \t- Integer constant\n", yytext); insCONSTT(yytext, "INT CONST");}

([0-9]*)\.([0-9]+)/[;|,|" "|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\n|\t|\^] {printf("%s \t- Floating constant\n", yytext); insCONSTT(yytext, "FLOAT CONST");}

[A-Za-z_][A-Za-z_0-9]*/[" "|;|,|\(|\)|<|>|=|\!|\||&|\+|\-|\*|\/|\%|~|\n|\.|\{|\^|\t] {printf("%s \t- Identifier\n", yytext); insSYMT(yytext, "IDENTIFIER");}


(.?) {
		if(yytext[0]=='#')
		{
       		printf("Error: Pre-Processor directive -- LINE: %d\n",yylineno);
       	}
	    else if(yytext[0]=='/')
	    {
       		printf("Error: Unmatched comment -- LINE: %d\n",yylineno);
       	}
       	else if(yytext[0]=='\"')
       	{
       		printf("Error: Incomplete string -- LINE: %d\n",yylineno);
       	}
       	else
       	{
       		printf("Error: Other -- LINE: %d\n",yylineno);
       	}
       	printf("%s\n", yytext);
       	return 0;
}

%%
int yywrap(){
    return 1;
}



int main(int argc , char **argv){

    printf("\n\n");

	int i;
	for (i=0;i<1001;i++){
		symt[i].length=0;
		constt[i].length=0;
	}

	yyin = fopen(argv[1],"r");
	yylex();

	printf("\n\nSymbol Table\n\n");
	showSYMTT();
	printf("\n\nConstant Table\n\n");
	showCONSTT();
}
