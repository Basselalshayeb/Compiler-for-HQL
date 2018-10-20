%option noyywrap case-insensitive

%{
	#pragma warning (disable: 4005)

	#include <iostream>
	#include <cmath>
	#include <string>
	using namespace std;

	extern void yyerror(const char*);

	#include "parser.h"
%}

%s BTWMODE
NUMB	([0-9]+)|([0-9]*\.[0-9]+)

%%

"add"				{ return ADD; }
"constraint"		{ return CONSTRAINT; }
"alter"				{ return ALTER; }
"column"			{ return COLUMN; }
"table"				{ return TABLE; }
"all"				{ return ALL; }
<BTWMODE>AND        { BEGIN INITIAL; return AND; }
"and"				{ return ANDOP; }
"any"				{ return ANY; }
"as"				{ return AS; }
"asc"				{ return ASC; }
"between"			{ BEGIN BTWMODE; return BETWEEN; }
"case"				{ return CASE; }
"check"				{ return CHECK; }
"create"			{ return CREATE; }
"database"			{ return DATABASE; }
"index"				{ return INDEX; }
"or"				{ return OR; }
"replace"			{ return REPLACE; }
"view"				{ return VIEW; }
"procedure"			{ return PROCEDURE; }
"unique"			{ return UNIQUE; }
"not"				{ return NOT; }
"default"			{ return DEFAULT; }
"delete"			{ return DELETE; }
"desc"				{ return DESC; }
"distinct"			{ return DISTINCT; }
"drop"				{ return DROP; }	
"exec" 				{ return EXEC; }
"exists"			{ return EXISTS; }
"foreign"			{ return FOREIGN; }
"key"				{ return KEY; }
"from"				{ return FROM; }
"group"				{ return GROUP; }
"by" 				{ return BY; }
"having"			{ return HAVING; }	
"in" 				{ return IN; }
"inner"				{ return INNER; }
"join" 				{ return JOIN; }	
"insert"			{ return INSERT; }
"into"				{ return INTO; }
"select"			{ return SELECT; }	
"is"				{ return IS; }
"null"				{ return NILL; }
"left"				{ return LEFT; }
"like"				{ return LIKE; }	
"limit"				{ return LIMIT; }	
"only"				{ return ONLY; }  
"order"				{ return ORDER; }	
"outer"				{ return OUTER; }	
"primary"			{ return PRIMARY; }	
"right"				{ return RIGHT; }	
"top"				{ return TOP; }	
"set"				{ return SET; }	
"truncate"			{ return TRUNCATE; }	
"union"				{ return UNION; }
"update"			{ return UPDATE; }
"values"			{ return VALUES; }
"where"				{ return WHERE; }

			/* Data Types */
"tinyint"			{ return TINYINT; }
"smallint"			{ return SMALLINT; }
"INT"				{ return INT; }
"bigint"			{ return BIGINT; }
"float"				{ return FLOAT; }
"double"			{ return DOUBLE; }
"DECIMAL"			{ return DECIMAL; }
"string"			{ return STRING; }
"varchar"			{ return VARCHAR; }
"char"				{ return CHAR; }
"date"				{ return DATE; }
"timestamp"			{ return TIMESTAMP; }
"array"				{ return ARRAY; }
"map"				{ return MAP; }
"struct"			{ return STRUCT; }
"uniontype"			{ return UNIONTYPE; }

			/* HiveQL Commands */
"show"				{ return SHOW; }
"tables"			{ return TABLES; }
"set"				{ return SET; }
"use"				{ return USE; }
"row"				{ return ROW; }
"fields"			{ return FIELDS; }
"load"				{ return LOAD; }
"data"				{ return DATA; }
"inpath"			{ return INPATH; }
"stored"			{ return STORED; }
"describe"			{ return DESCRIBE; }
"default"			{ return DEFAULT; }
"if"				{ return IF; }
"comment"			{ return COMMENT; }
"with"				{ return WITH; }
"local"				{ return LOCAL; }
"quit"				{ return QUTE; }

			/* Operators */

"!"					{ return NOT; }
[-+&~|^/%*(),.;]	{ return yytext[0]; }

"&&"				{ return ANDOP; }
"||"				{ return OR; }

"="				    { yylval = 4; return COMPARISON; } /* =4 <=>12 >2 >=6 <1 <= <>*/
"<=>"				{ yylval = 12; return COMPARISON; }
">"					{ yylval = 2; return COMPARISON; }
">="				{ yylval = 6; return COMPARISON; }
"<"					{ yylval = 1; return COMPARISON; }
"<="				{ yylval = 5; return COMPARISON; }
"!="					|
"<>"				{ yylval = 3; return COMPARISON; }
 


{NUMB}			{ yylval = atof(yytext); return NUM; }
[\n]			{ return '\n'; }
[ \t]			{ /* empty */ }
"quit"			{ yyterminate(); }
.				{	/*error handling */		yyerror("unknown word");}

