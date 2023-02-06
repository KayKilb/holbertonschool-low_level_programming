#include "main.h"

/**
 * print_square - function that prints a square and then a new line
 * @size: input for width and length
 * Return: a square
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			_putchar('#');
			for (b = 2; b <= size; b++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
