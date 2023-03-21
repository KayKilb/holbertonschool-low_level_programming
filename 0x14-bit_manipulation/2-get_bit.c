#include <string.h>
#include <math.h>
#include "main.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: number to convert
 * @index: index of bit to be returned
 * Return: the value of bit at index or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);

	return ((n >> index) & 1);
}
