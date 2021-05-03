%{
	#include <stdio.h>
	#include <iostream>
	#include <string>
	#include <map>
	using namespace std;
	#include "y.tab.h"
	extern FILE *yyin;
	extern int yylex();
	void yyerror(string s);
	extern int linenum;// use variable linenum from the lex file
	int indent = 0;
	map<string,string> functionValue;
	string finalOutput="";
	void printTab()
	{
		for(int i=0;i<indent;i++)
			finalOutput+="\t";
	}

%}
%token <str> ANDOR IDENTIFIER INTEGER COMP
%token IFRKW INT WHILERKW SEMICOLON OP CP OCB CCB  EQ EQSMALLER EQLARGER  VOID COMMA MINUSOP PLUSOP DIVIDEOP MULTOP
%type<str> operand condition_block  comparison_block  comparison integer_decleration_list function
integer_decleration assignment decleration_statement assignment_list if_while_statement
function_name function_call

%union{
	char * str;
	int number;
}

%%

statements:
	function statements
	|
	;

function_call:
	function_name OP CP SEMICOLON
	{
		if (functionValue.find(string($1)) != functionValue.end())
				finalOutput+="{\n"+functionValue[string($1)]+"}\n";
			else{
				cout<<"UNDEFINED FUNCTION ERROR"<<endl;
				exit(1);
			}
	}
	;
function:
	VOID function_name OP CP openCurly all_statements  closeCurly
	{
		
		functionValue[string($2)]=finalOutput;
		finalOutput="";
		indent--;
		printTab();
	}
function_name:
	IDENTIFIER
	{

	$$=strdup(string($1).c_str());

	}
	;


all_statements:
	assignment_list all_statements
	|
	decleration_statement all_statements
	|
	if_while_statement all_statements
	|
	function_call all_statements
	|

	;

decleration_statement:
	INT integer_decleration_list SEMICOLON
	{
		finalOutput+="int "+string($2)+";\n";
		indent--;
		printTab();
	}

if_while_statement:
	condition_op condition_block openCurly all_statements closeCurly
	{
		indent--;
		printTab();
		finalOutput+="}\n";

	}
	;
condition_block:
	OP comparison_block CP
	{
		finalOutput+="( "+ string($2) + " )\n";
		printTab();
		finalOutput+="{\n";

	}
	;

comparison_block:
	comparison_block ANDOR comparison
	{
		string combined = string($1)+ string($2) + string($3);
		$$ = strdup(combined.c_str());
	}
	|
	comparison
	{
		$$ = strdup($1);
	}
	;

comparison:
	operand COMP operand;
	{
		string combined = string($1) +" "+ string($2) +" "+ string($3);
		$$ = strdup(combined.c_str());
	}
;
condition_op:
	IFRKW
	{
		printTab();
		finalOutput+="if";
	}
	|
	WHILERKW
	{
		printTab();
		finalOutput+="while";
	}
	;
operand:
	IDENTIFIER
	{
  	if (functionValue.find(string($1)) != functionValue.end())
			$$=strdup((functionValue[string($1)]).c_str());
		else
			$$=strdup($1);
	}
	|
	INTEGER
	{
		$$=strdup($1);
	}
	;

openCurly:
	OCB {indent++;}
	;
closeCurly:
	CCB
	;
integer_decleration_list:
	integer_decleration
	|
	integer_decleration_list integer_decleration
	;
integer_decleration:
	integer_decleration COMMA IDENTIFIER
	{
		string combined =string($1)+","+string($3);
		$$ = strdup(combined.c_str());
	}
	|
	IDENTIFIER
	{
		$$=strdup($1);
	}
	;
assignment_list:
	IDENTIFIER EQ assignment SEMICOLON
	{
		finalOutput+=string($1)+" = "+string($3)+";\n";
	}
assignment:
	operand
	{
		$$=strdup($1);
	}
	|
	assignment PLUSOP assignment
	{
		string combined =string($1)+"+"+string($3);
		$$ = strdup(combined.c_str());
	}
	|
	assignment MINUSOP assignment
	{
		string combined =string($1)+"-"+string($3);
		$$ = strdup(combined.c_str());
	}
	|
	assignment MULTOP assignment
	{
		string combined =string($1)+"*"+string($3);
		$$ = strdup(combined.c_str());
	}
	|
	assignment DIVIDEOP assignment
	{
		string combined =string($1)+"/"+string($3);
		$$ = strdup(combined.c_str());
	}
	;
%%
void yyerror(string s){

		cerr<<"Error at line: "<<linenum<<endl;
}
int yywrap(){
	return 1;
}
int main(int argc, char *argv[])
{
    /* Call the lexer, then quit. */
    yyin=fopen(argv[1],"r");
    yyparse();
    fclose(yyin);
	cout<<"void main(){\n"<<functionValue["main"];
	cout<<"}"<<endl;
    return 0;
}
