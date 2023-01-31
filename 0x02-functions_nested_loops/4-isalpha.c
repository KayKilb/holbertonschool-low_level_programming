#include "main.h"
#include <stdio.h>

/**
* _isalpha - a function that checks for alphabetic character
* @c: single letter
* Return: 1 if c is a letter (lower or uppercase), else 0
*/
int _isalpha(char c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
return (1);
else
return (0);
}
