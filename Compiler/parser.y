%defines "parser.h"

%{
	#include <cmath>
	#include <cstdio>
	#include <string>
	#include <iostream>

	#pragma warning (disable: 4005)
	
	// this function will be generated
	// by flex
	extern int yylex(); // lexical analyzer
	 
	 // we have to code this function
	extern void yyerror(const char*);

	using namespace std;
%}

%define api.value.type { double }

%token NUM
%token ADD
%token CONSTRAINT
%token ALTER
%token COLUMN
%token TABLE
%token ALL
%token AND
%token ANDOP
%token ANY
%token AS
%token ASC
%token BETWEEN
%token CASE
%token CHECK
%token CREATE
%token DATABASE
%token INDEX
%token OR
%token REPLACE
%token VIEW
%token PROCEDURE
%token UNIQUE
%token COMPARISON
%token NOT
%token DEFAULT
%token DELETE
%token DESC
%token DISTINCT
%token DROP
%token EXEC
%token EXISTS
%token FOREIGN
%token KEY
%token FROM
%token GROUP
%token BY
%token HAVING
%token IN
%token INNER
%token JOIN
%token INSERT
%token INTO
%token SELECT
%token IS
%token NILL
%token LEFT
%token LIKE
%token LIMIT
%token ONLY
%token ORDER
%token BY
%token OUTER
%token PRIMARY
%token RIGHT
%token TOP
%token SET
%token TRUNCATE
%token UNION
%token UPDATE
%token VALUES
%token WHERE

%left COMPARISON /* = <> < > <= >= <=> */

%%		/* the grammars here */

input: %empty
	| input exp
	| input '\n'
	;

exp: ADD			 { cout<<"ADD"<<endl; }
   | CONSTRAINT      { cout<<"CONSTRAINT"<<endl; }
   | ALTER			 { cout<<"ALTER"<<endl; }	
   | COLUMN          { cout<<"COLUMN"<<endl; }
   | TABLE			 { cout<<"TABLE"<<endl; }
   | ALL			{ cout<<"ALL"<<endl; }
   | AND			{ cout<<"AND"<<endl; }
   | ANDOP			{ cout<<"ANDOP"<<endl;}
   | ANY			{ cout<<"ANY"<<endl; }
   | AS				{ cout<<"AS"<<endl; }
   | ASC			{ cout<<"ASC"<<endl; }
   | BETWEEN	    { cout<<"BETWEEN"<<endl; }
   | CASE			{ cout<<"CASE"<<endl; }
   | CHECK			{ cout<<"CHECK"<<endl; }
   | CREATE			{ cout<<"CREATE"<<endl; }
   | DATABASE		{ cout<<"DATABASE"<<endl; }
   | INDEX			{ cout<<"INDEX"<<endl; }
   | OR				{ cout<<"OR"<<endl; }
   | REPLACE		{ cout<<"REPLACE"<<endl; }
   | VIEW			{ cout<<"VIEW"<<endl; }
   | PROCEDURE		{ cout<<"PROCEDURE"<<endl; }
   | UNIQUE			{ cout<<"UNIQUE"<<endl; }
   | NOT			{ cout<<"NOT"<<endl; }
   | DEFAULT		{ cout<<"DEFAULT"<<endl; }
   ;


exp: COMPARISON		{ cout<<"COMPARISON"<<$1<<endl; }
   ;


exp: DELETE			{ cout<<"DELETE"<<endl; }
   | DESC			{ cout<<"DESC"<<endl; }
   | DISTINCT		{ cout<<"DISTINCT"<<endl; }
   | DROP			{ cout<<"DROP"<<endl; }
   | EXEC			{ cout<<"EXEC"<<endl; }
   | EXISTS			{ cout<<"EXISTS"<<endl; }
   | FOREIGN		{ cout<<"FOREIGN"<<endl; }
   | KEY			{ cout<<"KEY"<<endl; }
   | FROM			{ cout<<"FROM"<<endl; }
   | GROUP			{ cout<<"GROUP"<<endl; }
   | BY				{ cout<<"BY"<<endl; }
   | HAVING			{ cout<<"HAVING"<<endl; }
   | IN				{ cout<<"IN"<<endl; }
   | INNER			{ cout<<"INNER"<<endl; }
   | JOIN			{ cout<<"JOIN"<<endl; }
   | INSERT			{ cout<<"INSERT"<<endl; }
   | INTO			{ cout<<"INTO"<<endl; }
   | SELECT			{ cout<<"SELECT"<<endl; }
   | IS				{ cout<<"IS"<<endl; }
   | NILL			{ cout<<"NULL"<<endl; }
   | LEFT			{ cout<<"LEFT"<<endl; }
   | LIKE			{ cout<<"LIKE"<<endl; }
   | LIMIT			{ cout<<"LIMIT"<<endl; }
   | ONLY			{ cout<<"ONLY"<<endl; }
   | ORDER			{ cout<<"ORDER"<<endl; }
   | OUTER			{ cout<<"OUTER"<<endl; }
   | PRIMARY		{ cout<<"PRIMARY"<<endl; }
   | RIGHT			{ cout<<"RIGHT"<<endl; }
   | TOP			{ cout<<"TOP"<<endl; }
   | SET			{ cout<<"SET"<<endl; }
   | TRUNCATE		{ cout<<"TRUNCATE"<<endl; }
   | UNION			{ cout<<"UNION"<<endl; }
   | UPDATE			{ cout<<"UPDATE"<<endl; }
   | VALUES			{ cout<<"VALUES"<<endl; }
   | WHERE			{ cout<<"WHERE"<<endl; }
   ;

%%
