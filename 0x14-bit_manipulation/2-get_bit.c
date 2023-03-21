#include "main.h"
/**
 * get_bit - entry point
 * @n: input
 * @inx: index
 * Return: the value of the bit at index
 * or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int inx)
{
	unsigned int bits;

	bits = (n >> inx) & 1;

	if ((bits == 1) || (bits == 0))
		return (bits);
	else
		return (-1);
}
