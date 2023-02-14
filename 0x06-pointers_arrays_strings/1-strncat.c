#include "holberton.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * @n: input of max bytes to be used
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (a = 0; a < n; a++)
	{
		dest[i + a] = src[a];
		if (src[a] == '\0')
			a = n;
	}

	return (dest);
}
