#include "lists.h"
/**
 * print_listint - Entry Point
 * @h: struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeNum = 0;

	while (h)
	{
		nodeNum++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodeNum);
}
