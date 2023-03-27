#include "lists.h"
/**
 * print_dlistint - prints leng and elements
 * @h: head of list
 * Return: size_t value
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *elem;
	int count = 0;

	elem = h;
	while (elem != NULL)
	{
		printf("%d\n", elem->n);
		elem = elem->next;
		count++;
	}
	return (count);
}
