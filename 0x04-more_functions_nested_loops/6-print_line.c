#include "main.h"

/**
 * print_line - a function that inputs an underscore into the terminal
 * @n: input number of time to print '_'
 * Return: an underscore
 */

void print_line(int n)
{
	int co;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= 0; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
