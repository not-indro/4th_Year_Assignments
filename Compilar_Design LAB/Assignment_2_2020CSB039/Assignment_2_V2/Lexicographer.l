%{
#include "lexemes.h"    //for macros
%}

%%

\%                                          {return MOD_TOK;}
\+                                          {return ADD_TOK;}
\-                                          {return SUB_TOK;}
\*                                          {return MUL_TOK;}
\/                                          {return DIV_TOK;}
\%\=                                        {return MOD_EQUAL_TOK;}
\+\=                                        {return PLUS_EQUAL_TOK;}
\-\=                                        {return MINUS_EQUAL_TOK;}
\*\=                                        {return MUL_EQUAL_TOK;}
\/\=                                        {return DIV_EQUAL_TOK;}
\=                                          {return EQUAL_TOK;}
\&                                          {return BITWISE_AND_TOK;}
\|                                          {return BITWISE_OR_TOK;}
\^                                          {return BITWISE_XOR_TOK;}
\&\=                                        {return COMPOUND_BITWISE_AND;}
\|\=                                        {return COMPOUND_BITWISE_OR;}
\^\=                                        {return COMPOUND_BITWISE_XOR;}
\~                                          {return BITWISE_COMPLEMENT;}
\<\<                                        {return SHIFT_LEFT;}
\>\>                                        {return SHIFT_LEFT;}
\+\+                                        {return INC_TOK;}
\-\-                                        {return DEC_TOK;}
\&\&                                        {return AND_TOK;}
\|\|                                        {return OR_TOK;}
\!                                          {return NOT;}
\=\=                                        {return EQUAL_EQUAL_TOK;}
\>                                          {return GT_TOK;}
\<                                          {return LT_TOK;}
\!\=                                        {return NOT_EQUAL_TOK;}
\>\=                                        {return GT_EQUAL_TOK;}
\<\=                                        {return LT_EQUAL_TOK;}
\(                                          {return LPAREN_TOK;}
\)                                          {return RPAREN_TOK;}
\{                                          {return LBRACES_TOK;}
\}                                          {return RBRACES_TOK;}
\[                                          {return LCROCHETS_TOK;}
\]                                          {return RCROCHETS_TOK;}
,                                           {return COMMA_TOK;}
;                                           {return SEMICOLON_TOK;}
\?                                          {return TERNARY_OP_QUESTION;}
\:                                          {return TERNARY_OP_COLON;}
                                            /* {return REFERENCE_TOK;} */
                                            /* {return DEREFERENCE_TOK;} */
\-\>                                        {return ARROW;}
auto                                        {return AUTO_TOK;}
break                                       {return BREAK_TOK;}
case                                        {return CASE_TOK;}
char                                        {return CHAR_TOK;}
const                                       {return CONST_TOK;}
continue                                    {return CONTINUE_TOK;}
default                                     {return DEFAULT_TOK;}
do                                          {return DO_TOK;}
double                                      {return DOUBLE_TOK;}
else                                        {return ELSE_TOK;}
enum                                        {return ENUM_TOK;}
extern                                      {return EXTERN_TOK;}
float                                       {return FLOAT_TOK;}
for                                         {return FOR_TOK;}
goto                                        {return GOTO_TOK;}
if                                          {return IF_TOK;}
int                                         {return INT_TOK;}
long                                        {return LONG_TOK;}
register                                    {return REGISTER_TOK;}
return                                      {return RETURN_TOK;}
short                                       {return SHORT_TOK;}
signed                                      {return SIGNED_TOK;}
sizeof                                      {return SIZEOF_TOK;}
static                                      {return STATIC_TOK;}
struct                                      {return STRUCT_TOK;}
switch                                      {return SWITCH_TOK;}
typedef                                     {return TYPEDEF_TOK;}
union                                       {return UNION_TOK;}
unsigned                                    {return UNSIGNED_TOK;}
void                                        {return VOID_TOK;}
volatile                                    {return VOLATILE_TOK;}
while                                       {return WHILE_TOK;}
([a-z]|[A-Z]|\_)([a-z]|[A-Z]|[0-9]|\_)*     {return ID_TOK;}
[0-9]+                                      {return INTCONST;}
(\+|\-)?[0-9]+\.[0-9]+                      {return FLOATING_POINT_CONST;}
(\+|\-)?[0-9]+(\.[0-9]+)?\e(\+|\-)?[0-9]+   {return EXPONENTIAL_CONST;}
\'.\'                                       {return CHARACTER;}
\".*\"                                      {return STRING;}
[ \t\n]+                                    {}

%%

int yywrap() {
    return 1;
}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        fprintf(stderr,"Please add a filename.\n");
        exit(EXIT_FAILURE);
    }

    yyin = fopen(argv[1],"r");
    if(yyin == NULL) {
        perror("fopen() error");
        exit(EXIT_FAILURE);
    }

    int res;
    while((res = yylex()) > 0) {
        printf("%s\t\t",yytext); 

        //For Arithmetic Operators
        if(res == MOD_TOK) printf("MOD_TOK");
        else if(res == ADD_TOK) printf("ADD_TOK");
        else if(res == SUB_TOK) printf("SUB_TOK");
        else if(res == MUL_TOK) printf("MUL_TOK");
        else if(res == DIV_TOK) printf("DIV_TOK");

        //For Assignment Operators
        else if(res == MOD_EQUAL_TOK) printf("MOD_EQUAL_TOK");
        else if(res == PLUS_EQUAL_TOK) printf("PLUS_EQUAL_TOK");
        else if(res == MINUS_EQUAL_TOK) printf("MINUS_EQUAL_TOK");
        else if(res == MUL_EQUAL_TOK) printf("MUL_EQUAL_TOK");
        else if(res == DIV_EQUAL_TOK) printf("DIV_EQUAL_TOK");
        else if(res == EQUAL_TOK) printf("EQUAL_TOK");

        //For Bitwise Operators
        else if(res == BITWISE_AND_TOK) printf("BITWISE_AND_TOK");
        else if(res == BITWISE_OR_TOK) printf("BITWISE_OR_TOK");
        else if(res == BITWISE_XOR_TOK) printf("BITWISE_XOR_TOK");
        else if(res == COMPOUND_BITWISE_AND) printf("COMPOUND_BITWISE_AND");
        else if(res == COMPOUND_BITWISE_OR) printf("COMPOUND_BITWISE_OR");
        else if(res == COMPOUND_BITWISE_XOR) printf("COMPOUND_BITWISE_XOR");
        else if(res == BITWISE_COMPLEMENT) printf("BITWISE_COMPLEMENT");
        else if(res == SHIFT_LEFT) printf("SHIFT_LEFT");
        else if(res == SHIFT_RIGHT) printf("SHIFT_RIGHT");
        
        //For Increment and Decrement Operators
        else if(res == INC_TOK) printf("INC_TOK");
        else if(res == DEC_TOK) printf("DEC_TOK");

        //For Logical Operators
        else if(res == AND_TOK) printf("AND_TOK");
        else if(res == OR_TOK) printf("OR_TOK");
        else if(res == NOT) printf("NOT");

        //For Relational Operators
        else if(res == EQUAL_EQUAL_TOK) printf("EQUAL_EQUAL_TOK");
        else if(res == GT_TOK) printf("GT_TOK");
        else if(res == LT_TOK) printf("LT_TOK");
        else if(res == NOT_EQUAL_TOK) printf("NOT_EQUAL_TOK");
        else if(res == GT_EQUAL_TOK) printf("GT_EQUAL_TOK");
        else if(res == LT_EQUAL_TOK) printf("LT_EQUAL_TOK");

        //For Single Character Lexemes
        else if(res == LPAREN_TOK) printf("LPAREN_TOK");
        else if(res == RPAREN_TOK) printf("RPAREN_TOK");
        else if(res == LBRACES_TOK) printf("LBRACES_TOK");
        else if(res == RBRACES_TOK) printf("RBRACES_TOK");
        else if(res == LCROCHETS_TOK) printf("LCROCHETS_TOK");
        else if(res == RCROCHETS_TOK) printf("RCROCHETS_TOK");
        else if(res == COMMA_TOK) printf("COMMA_TOK");
        else if(res == SEMICOLON_TOK) printf("SEMICOLON_TOK");

        //For Conditional Operator
        else if(res == TERNARY_OP_QUESTION) printf("TERNERY_OP_QUESTION");
        else if(res == TERNARY_OP_COLON) printf("TERNERY_OP_COLON");

        //For Operators related to pointer operations
        else if(res == REFERENCE) printf("REFERENCE");
        else if(res == DEREFERENCE) printf("DEREFERENCE");
        else if(res == ARROW) printf("ARROW");

        //For Identifiers and Constants
        else if(res == ID_TOK) printf("ID_TOK");
        else if(res == INTCONST) printf("INTCONST");
        else if(res == FLOATING_POINT_CONST) printf("FLOATING_POINT_CONST");
        else if(res == EXPONENTIAL_CONST) printf("EXPONENTIAL_CONST");
        else if(res == CHARACTER) printf("CHARACTER");
        else if(res == STRING) printf("STRING");
        
        //CHecking for specefic keywords
        else if(res == AUTO_TOK) printf("AUTO_TOK");
        else if(res == CASE_TOK) printf("CASE_TOK");
        else if(res == BREAK_TOK) printf("BREAK_TOK");
        else if(res == CHAR_TOK) printf("CHAR_TOK");
        else if(res == CONST_TOK) printf("CONST_TOK");
        else if(res == CONTINUE_TOK) printf("CONTINUE_TOK");
        else if(res == DEFAULT_TOK) printf("DEFAULT_TOK");
        else if(res == DO_TOK) printf("DO_TOK");
        else if(res == DOUBLE_TOK) printf("DOUBLE_TOK");
        else if(res == ELSE_TOK) printf("ELSE_TOK");
        else if(res == ENUM_TOK) printf("ENUM_TOK");
        else if(res == EXTERN_TOK) printf("EXTERN_TOK");
        else if(res == FLOAT_TOK) printf("FLOAT_TOK");
        else if(res == FOR_TOK) printf("FOR_TOK");
        else if(res == GOTO_TOK) printf("GOTO_TOK");
        else if(res == IF_TOK) printf("IF_TOK");
        else if(res == INT_TOK) printf("INT_TOK");
        else if(res == LONG_TOK) printf("LONG_TOK");
        else if(res == REGISTER_TOK) printf("REGISTER_TOK");
        else if(res == RETURN_TOK) printf("RETURN_TOK");
        else if(res == SHORT_TOK) printf("SHORT_TOK");
        else if(res == SIGNED_TOK) printf("SIGNED_TOK");
        else if(res == SIZEOF_TOK) printf("SIZEOF_TOK");
        else if(res == STATIC_TOK) printf("STATIC_TOK");
        else if(res == STRUCT_TOK) printf("STRUCT_TOK");
        else if(res == SWITCH_TOK) printf("SWITCH_TOK");
        else if(res == TYPEDEF_TOK) printf("TYPEDEF_TOK");
        else if(res == UNION_TOK) printf("UNION_TOK");
        else if(res == UNSIGNED_TOK) printf("UNSIGNED_TOK");
        else if(res == VOID_TOK) printf("VOID_TOK");
        else if(res == VOLATILE_TOK) printf("VOLATILE_TOK");
        else if(res == WHILE_TOK) printf("WHILE_TOK");

        printf("\n");
    }
    
    return(0);
}