#include "lists.h"
/**
 * dlistint_len - length of linked list
 * @h: head of list
 * Return: list value
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *elem;
	int count = 0;

	elem = h;
	while (elem != NULL)
	{
		count++;
		elem = elem->next;
	}
	return (count);
}
