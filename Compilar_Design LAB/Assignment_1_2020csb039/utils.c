#include "utils.h" // include the header file for the utility functions

bool isLetter(char ch)  // check if the character is a letter
{
    return (ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'); // return true if the character is a letter
}

bool isDigit(char ch) // check if the character is a digit
{
    return (ch <= '9' && ch >= '0'); // return true if the character is a digit
}

bool isAlphanumeric(char ch) // check if the character is a letter or a digit
{
    return isLetter(ch) || isDigit(ch); // return true if the character is a letter or a digit
} 