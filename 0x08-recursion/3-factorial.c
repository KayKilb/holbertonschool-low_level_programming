#include "main.h"

/**
 * factorial - factorials of numbers
 * @n: number
 * Return: -1 if less than 0 else return 1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
