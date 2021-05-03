/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "project.y"
	#include <stdio.h>
	#include <iostream>
	#include <string>
	#include <map>
	using namespace std;
	#include "y.tab.h"
	extern FILE *yyin;
	extern int yylex();
	void yyerror(string s);
	extern int linenum;/* use variable linenum from the lex file*/
	int indent = 0;
	map<string,string> functionValue;
	string finalOutput="";
	void printTab()
	{
		for(int i=0;i<indent;i++)
			finalOutput+="\t";
	}

#line 28 "project.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
	char * str;
	int number;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 53 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ANDOR 257
#define IDENTIFIER 258
#define INTEGER 259
#define COMP 260
#define IFRKW 261
#define INT 262
#define WHILERKW 263
#define SEMICOLON 264
#define OP 265
#define CP 266
#define OCB 267
#define CCB 268
#define EQ 269
#define EQSMALLER 270
#define EQLARGER 271
#define VOID 272
#define COMMA 273
#define MINUSOP 274
#define PLUSOP 275
#define DIVIDEOP 276
#define MULTOP 277
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,   13,    6,   12,   15,   15,   15,   15,   15,
    9,   11,    2,    3,    3,    4,   17,   17,    1,    1,
   14,   16,    5,    5,    7,    7,   10,    8,    8,    8,
    8,    8,
};
static const YYINT yylen[] = {                            2,
    2,    0,    4,    7,    1,    2,    2,    2,    2,    0,
    3,    5,    3,    3,    1,    3,    1,    1,    1,    1,
    1,    1,    1,    2,    3,    1,    4,    1,    3,    3,
    3,    3,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    5,    0,    1,    0,    0,   21,    0,
    0,   17,    0,   18,    0,    0,    0,    0,    0,    0,
    0,    0,   26,    0,    0,    7,    6,    8,    0,    9,
   22,    4,    0,    0,   19,   20,   28,    0,   11,    0,
    0,    0,    0,    0,   15,    0,   27,    0,    0,    0,
    0,   25,    3,    0,    0,   13,    0,    0,    0,    0,
    0,   16,   14,   12,
};
static const YYINT yydgoto[] = {                          2,
   37,   34,   44,   45,   24,    3,   25,   38,   15,   16,
   17,   18,   19,   10,   20,   32,   21,
};
static const YYINT yysindex[] = {                      -263,
 -236,    0, -263,    0, -254,    0, -237, -227,    0, -235,
 -239,    0, -217,    0, -235, -235, -235, -223, -235, -225,
 -221, -238,    0, -252, -228,    0,    0,    0, -220,    0,
    0,    0, -238, -227,    0,    0,    0, -259,    0, -228,
 -211, -216, -210, -247,    0, -235,    0, -238, -238, -238,
 -238,    0,    0, -238, -238,    0, -225, -242, -242, -242,
 -242,    0,    0,    0,
};
static const YYINT yyrindex[] = {                        49,
    0,    0,   49,    0,    0,    0,    0,    0,    0, -215,
 -214,    0,    0,    0, -215, -215, -215,    0, -215,    0,
    0,    0,    0,    0, -251,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -250,
    0,    0,    0,    0,    0, -215,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -212, -209, -208,
 -207,    0,    0,    0,
};
static const YYINT yygindex[] = {                        51,
  -30,    0,    0,    3,    0,    0,   35,  -12,    0,    0,
    0,   59,    0,   27,  -15,    5,    0,
};
#define YYTABLESIZE 62
static const YYINT yytable[] = {                         26,
   27,   28,   43,   30,   47,   23,   23,   24,    1,   55,
    7,   39,   23,   24,   48,   49,   50,   51,   56,   35,
   36,    4,   11,   62,   43,   12,   13,   14,    8,   22,
   57,   48,   49,   50,   51,   58,   59,   60,   61,    9,
   23,   29,   31,   33,   41,   42,   52,   53,    2,   54,
    5,   30,   10,    6,   29,   32,   31,   63,   40,    5,
   46,   64,
};
static const YYINT yycheck[] = {                         15,
   16,   17,   33,   19,  264,  258,  258,  258,  272,  257,
  265,  264,  264,  264,  274,  275,  276,  277,  266,  258,
  259,  258,  258,   54,   55,  261,  262,  263,  266,  269,
   46,  274,  275,  276,  277,   48,   49,   50,   51,  267,
  258,  265,  268,  265,  273,  266,  258,  264,    0,  260,
  265,  264,  268,    3,  264,  264,  264,   55,   24,    1,
   34,   57,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 277
#define YYUNDFTOKEN 297
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ANDOR","IDENTIFIER","INTEGER",
"COMP","IFRKW","INT","WHILERKW","SEMICOLON","OP","CP","OCB","CCB","EQ",
"EQSMALLER","EQLARGER","VOID","COMMA","MINUSOP","PLUSOP","DIVIDEOP","MULTOP",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : statements",
"statements : function statements",
"statements :",
"function_call : function_name OP CP SEMICOLON",
"function : VOID function_name OP CP openCurly all_statements closeCurly",
"function_name : IDENTIFIER",
"all_statements : assignment_list all_statements",
"all_statements : decleration_statement all_statements",
"all_statements : if_while_statement all_statements",
"all_statements : function_call all_statements",
"all_statements :",
"decleration_statement : INT integer_decleration_list SEMICOLON",
"if_while_statement : condition_op condition_block openCurly all_statements closeCurly",
"condition_block : OP comparison_block CP",
"comparison_block : comparison_block ANDOR comparison",
"comparison_block : comparison",
"comparison : operand COMP operand",
"condition_op : IFRKW",
"condition_op : WHILERKW",
"operand : IDENTIFIER",
"operand : INTEGER",
"openCurly : OCB",
"closeCurly : CCB",
"integer_decleration_list : integer_decleration",
"integer_decleration_list : integer_decleration_list integer_decleration",
"integer_decleration : integer_decleration COMMA IDENTIFIER",
"integer_decleration : IDENTIFIER",
"assignment_list : IDENTIFIER EQ assignment SEMICOLON",
"assignment : operand",
"assignment : assignment PLUSOP assignment",
"assignment : assignment MINUSOP assignment",
"assignment : assignment MULTOP assignment",
"assignment : assignment DIVIDEOP assignment",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 216 "project.y"
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
#line 285 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 3:
#line 42 "project.y"
	{
		if (functionValue.find(string(yystack.l_mark[-3].str)) != functionValue.end())
				finalOutput+="{\n"+functionValue[string(yystack.l_mark[-3].str)]+"}\n";
			else{
				cout<<"UNDEFINED FUNCTION ERROR"<<endl;
				exit(1);
			}
	}
break;
case 4:
#line 53 "project.y"
	{
		
		functionValue[string(yystack.l_mark[-5].str)]=finalOutput;
		finalOutput="";
		indent--;
		printTab();
	}
break;
case 5:
#line 62 "project.y"
	{

	yyval.str=strdup(string(yystack.l_mark[0].str).c_str());

	}
break;
case 11:
#line 84 "project.y"
	{
		finalOutput+="int "+string(yystack.l_mark[-1].str)+";\n";
		indent--;
		printTab();
	}
break;
case 12:
#line 92 "project.y"
	{
		indent--;
		printTab();
		finalOutput+="}\n";

	}
break;
case 13:
#line 101 "project.y"
	{
		finalOutput+="( "+ string(yystack.l_mark[-1].str) + " )\n";
		printTab();
		finalOutput+="{\n";

	}
break;
case 14:
#line 111 "project.y"
	{
		string combined = string(yystack.l_mark[-2].str)+ string(yystack.l_mark[-1].str) + string(yystack.l_mark[0].str);
		yyval.str = strdup(combined.c_str());
	}
break;
case 15:
#line 117 "project.y"
	{
		yyval.str = strdup(yystack.l_mark[0].str);
	}
break;
case 16:
#line 124 "project.y"
	{
		string combined = string(yystack.l_mark[-2].str) +" "+ string(yystack.l_mark[-1].str) +" "+ string(yystack.l_mark[0].str);
		yyval.str = strdup(combined.c_str());
	}
break;
case 17:
#line 131 "project.y"
	{
		printTab();
		finalOutput+="if";
	}
break;
case 18:
#line 137 "project.y"
	{
		printTab();
		finalOutput+="while";
	}
break;
case 19:
#line 144 "project.y"
	{
  	if (functionValue.find(string(yystack.l_mark[0].str)) != functionValue.end())
			yyval.str=strdup((functionValue[string(yystack.l_mark[0].str)]).c_str());
		else
			yyval.str=strdup(yystack.l_mark[0].str);
	}
break;
case 20:
#line 152 "project.y"
	{
		yyval.str=strdup(yystack.l_mark[0].str);
	}
break;
case 21:
#line 158 "project.y"
	{indent++;}
break;
case 25:
#line 170 "project.y"
	{
		string combined =string(yystack.l_mark[-2].str)+","+string(yystack.l_mark[0].str);
		yyval.str = strdup(combined.c_str());
	}
break;
case 26:
#line 176 "project.y"
	{
		yyval.str=strdup(yystack.l_mark[0].str);
	}
break;
case 27:
#line 182 "project.y"
	{
		finalOutput+=string(yystack.l_mark[-3].str)+" = "+string(yystack.l_mark[-1].str)+";\n";
	}
break;
case 28:
#line 187 "project.y"
	{
		yyval.str=strdup(yystack.l_mark[0].str);
	}
break;
case 29:
#line 192 "project.y"
	{
		string combined =string(yystack.l_mark[-2].str)+"+"+string(yystack.l_mark[0].str);
		yyval.str = strdup(combined.c_str());
	}
break;
case 30:
#line 198 "project.y"
	{
		string combined =string(yystack.l_mark[-2].str)+"-"+string(yystack.l_mark[0].str);
		yyval.str = strdup(combined.c_str());
	}
break;
case 31:
#line 204 "project.y"
	{
		string combined =string(yystack.l_mark[-2].str)+"*"+string(yystack.l_mark[0].str);
		yyval.str = strdup(combined.c_str());
	}
break;
case 32:
#line 210 "project.y"
	{
		string combined =string(yystack.l_mark[-2].str)+"/"+string(yystack.l_mark[0].str);
		yyval.str = strdup(combined.c_str());
	}
break;
#line 648 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
