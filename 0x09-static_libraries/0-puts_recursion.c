#include "main.h"

/**
 * _puts_recursion - a func that prints a string then a new line
 * @s: standard input
 * Return: Puts with recursion
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
