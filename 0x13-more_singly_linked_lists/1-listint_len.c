#include "lists.h"
/**
 * listint_len - entry point
 * @h: head
 * Return: number of elements linked
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
