#include "lists.h"
/**
 * print_dlistint_backward - prints list backwards
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *elem = h;

	if (h == NULL)
		return (0);

	while (elem->next != NULL)
		elem = elem->next;

	while (elem != NULL)
	{
		printf("%d\n", elem->n);
		elem = elem->prev;
		count++;
	}

	return (count);
}
