#include <stdio.h>
#include "main.h"

/**
 * _isupper - is a function that checks for uppercase letters
 * @c: input
 * Return: 1 if C is found, else return 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
