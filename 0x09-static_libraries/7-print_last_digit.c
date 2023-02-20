#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Printing the last digit
 * @c: int number
 *
 * Return: last
 */

int print_last_digit(int c)
{
int last = c % 10;

if (c < 0)
last = -last;

_putchar(last + '0');

return (last);
}
