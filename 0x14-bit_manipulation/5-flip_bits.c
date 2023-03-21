#include "main.h"
#include <stdio.h>

/**
 * flip_bits -fun that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number
 * @m: number
 * Return: Numbers of bits that n have to change for be equal to m
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;

	for (count = i = 0; i < 64; i++, count++)
		if (((n >> i) & 1) == ((m >> i) & 1))
			count--;

	return (count);
}
