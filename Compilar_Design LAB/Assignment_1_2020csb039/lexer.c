#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lexer.h"
#include "lexemes.h"
#include "utils.h"

int i;
FILE *yyin; 
char *yytext;

// Utility Function To Check Reserved Keyword Token

int checkReservedKeyword(char *word) // check if the word is a reserved keyword
{
    if (strcmp(word, "while") == 0) // strcmp returns 0 if the two strings are equal
        return WHILE_TOK;
    if (strcmp(word, "for") == 0) // strcmp returns 0 if the two strings are equal
        return FOR_TOK;
    if (strcmp(word, "if") == 0)
        return IF_TOK;
    if (strcmp(word, "else") == 0) // strcmp returns 0 if the two strings are equal
        return ELSE_TOK;
    if (strcmp(word, "int") == 0) // strcmp returns 0 if the two strings are equal
        return INT_TOK;
    if (strcmp(word, "float") == 0) // strcmp returns 0 if the two strings are equal
        return FLOAT_TOK;

    return 0;
}

int checkSingleCharacterLexemes(char *word) // check if the word is a single character lexeme
{
    if (strcmp(word, "(") == 0) // strcmp returns 0 if the two strings are equal
        return LPAREN_TOK;
    if (strcmp(word, ")") == 0) // strcmp returns 0 if the two strings are equal
        return RPAREN_TOK;
    if (strcmp(word, ">") == 0) // strcmp returns 0 if the two strings are equal
        return GT_TOK;
    if (strcmp(word, "<") == 0) // strcmp returns 0 if the two strings are equal
        return LT_TOK;
    if (strcmp(word, "=") == 0)
        return EQ_TOK;
    if (strcmp(word, "-") == 0)
        return MINUS_TOK;
    if (strcmp(word, "+") == 0)
        return PLUS_TOK;
    if (strcmp(word, "*") == 0)
        return MULTIPLY_TOK;
    if (strcmp(word, "/") == 0)
        return DIVISION_TOK;
    if (strcmp(word, ";") == 0)
        return SEMICOLON_TOK;

    return 0;
}

int checkValidIdentifier(char *word) // check if the word is a valid identifier
{
    // first letter of identifier should be letter or underscore
    if (word[0] != '_' && !isLetter(word[0]))
        return 0;

    // can only contain letters (uppercase and lowercase), digits and underscore
    for (i = 0; i < (int)strlen(word); i++)
    {
        if (word[0] != '_' && !isAlphanumeric(word[0])) // if any character is not a letter, digit or underscore
            return 0;
    }

    return ID_TOK; // if all characters are valid, it's an identifier
}
 
int checkConstant(char *word) // check if the word is a constant
{
    int period_count = 0;

    // Loop through each character of the word
    for (i = 0; i < (int)strlen(word); i++)
    {
        // If a period (.) is found and it's the first one, it could be a floating-point constant
        if (word[i] == '.' && period_count < 1)
        {
            period_count++;
        }
        else if (!isDigit(word[i])) // If any character is not a digit or a period, it's not a constant
        {
            return 0; // If any character is not a digit or a period, it's not a constant
        }
    }

    // If no period is found, consider it as an integer constant
    if (period_count == 0)
        return INTCONST;
    else if (period_count == 1) // If one period is found, consider it as a floating-point constant
        return FLOATCONST;
    else
        return 0;
}
int yylex()
{
    char *word = malloc(256); // allocate memory for the word
    int flag;
    fscanf(yyin, "%s", word); // read the next word from the file
    yytext = word;

    if ((flag = checkReservedKeyword(word))) // check if the word is a reserved keyword
        return flag;
    if ((flag = checkSingleCharacterLexemes(word))) // check if the word is a single character lexeme
        return flag;
    if ((flag = checkValidIdentifier(word))) // check if the word is a valid identifier
        return flag;
    if ((flag = checkConstant(word))) // check if the word is a constant
        return flag;

    return 0;
}
void lexer_main(const char *filename) // main function of the lexer
{
    yyin = fopen(filename, "r"); // open the file in read mode

    if (yyin == NULL) // if the file doesn't exist
    {
        printf("%s: no such file\n", filename); // print error message
        return;
    }

    int token;
    while (!feof(yyin)) // while the end of file is not reached
    {
        token = yylex(); // get the next token
        if (token)
            printf("[TOKEN] [%s] -> [%d]\n", yytext, token); // print the token
        else
            printf("[TOKEN NOT FOUND YET]\n");
    }
    fclose(yyin);
}