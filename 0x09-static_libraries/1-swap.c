#include "main.h"

/**
 * swap_int - a function that swaps values of 2 ints
 * @a: input 1
 * @b: input 2
 * Return: Integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
