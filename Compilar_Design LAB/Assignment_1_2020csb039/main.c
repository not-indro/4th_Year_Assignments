#include <stdio.h> 
#include "lexer.h"

int main(int argc, char *argv[]) // main function
{
    if (argc != 2) // check if the number of arguments is correct
    {
        printf("USAGE: %s <source-file>\n", argv[0]); // print error message
    }
    else
    {
        lexer_main(argv[1]); // call the lexer_main function
    }
    return 0; // return 0 to indicate successful execution
} 