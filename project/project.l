digit	[0-9]
letter	[A-Za-z]
%{
  #include <stdio.h>
  #include <string.h>
  #include "y.tab.h"
  #include <iostream>
  using namespace std;

  int linenum=1;
%}
%%


"if"	return IFRKW;
"int"	return INT;
"while"	return WHILERKW;
"void" 	return VOID;
";"	return SEMICOLON;
"(" return OP;
")" return CP;
"{" return OCB;
"}" return CCB;
"=" return EQ;
"," return COMMA;
"-" return MINUSOP;
"+" return PLUSOP;
"/" return DIVIDEOP;
"*" return MULTOP;
"||"|"&&" { yylval.str=strdup(yytext); return ANDOR;}
"<"|">"|"<="|">="|"=="|"!=" { yylval.str=strdup(yytext); return COMP;}
"=<" return EQSMALLER;
"=>" return EQLARGER;

{letter}({letter}|{digit})*	{ yylval.str=strdup(yytext); return IDENTIFIER;}
[0-9]+	{yylval.str=strdup(yytext); return INTEGER;}
\n	{linenum++;}
[ \t]+
%%
