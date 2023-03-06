#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array on new line
 * @array: array
 * @size: size
 * @action: pointer to the func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
		if (array == NULL || action == NULL)
			return;
		for (i = 0; i < size; i++)
			action(array[i]);
}
