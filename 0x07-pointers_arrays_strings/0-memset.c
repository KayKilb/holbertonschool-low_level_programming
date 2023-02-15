#include "main.h"

/**
 * _memset - Is the Entry Point
 * @s: the pointer destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
