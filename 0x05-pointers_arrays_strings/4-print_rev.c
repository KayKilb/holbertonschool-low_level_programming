#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		i = length;
		for (length -= 1; length >= 0; length--)
		{
			_putchar(s[length]);
		}
	}
		_putchar('\n');
}
