#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array of int
 * @a: content
 * @n: elements of content
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		n--;
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
