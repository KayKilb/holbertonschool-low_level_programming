#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: parameter
 * Return: 0 or sum
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, const unsigned int);
	}

	va_end(parameters);

	return (sum);
}
