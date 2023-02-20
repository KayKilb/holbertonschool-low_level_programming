#include "main.h"

/**
 * _print_rev_recursion - reversing characters in a sting
 * @s: the input
 * Return: Reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
