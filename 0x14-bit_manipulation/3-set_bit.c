#include <string.h>
#include <math.h>
#include "main.h"
/**
 * set_bit - func that sets the value of a bit
 * to 1 at index
 * @n: number
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = (1 << index) | *n;

	return (1);
}
