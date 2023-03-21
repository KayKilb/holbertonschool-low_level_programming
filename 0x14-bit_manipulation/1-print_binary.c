#include <string.h>
#include <math.h>
#include "main.h"
/**
 * print_binary - prints binary representation
 * of a number
 * @n: number to be converted
 * Return: 0 or 1
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
