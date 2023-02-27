#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: 98 upon failure, pointer to new memory block otherwise.
 */
void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (alloc == NULL)
	{
		free(alloc);
		exit(98);
	}
	return (alloc);
}
