#include "main.h"
/**
 * clear_bit - func that sets the value of a bit to 0
 * at a given index
 * @n: number to clear
 * @index: position to clear
 * Returm: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
