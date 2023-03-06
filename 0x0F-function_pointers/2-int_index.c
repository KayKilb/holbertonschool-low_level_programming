#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - search for integer in array via func pointer
 * @array: array
 * @size: size of array
 * @cmp: pointer to searching/comparing func that we need to execute
 * Return: -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	/* iterate through array and call searching function */
	for (i = 0; i < size; i++)
		if (cmp(*(array + i))) /* if returned true */
			return (i);

	return (-1);
}
