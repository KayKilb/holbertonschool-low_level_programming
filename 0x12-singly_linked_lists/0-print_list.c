#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - func that prints all data from list_t
 * @h: struct
 * Return: number of nodes or nil if (0)
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
