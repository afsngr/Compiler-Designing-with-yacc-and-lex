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
extern YYSTYPE yylval;
