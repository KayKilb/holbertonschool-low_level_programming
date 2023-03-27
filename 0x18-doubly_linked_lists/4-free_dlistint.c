#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: head of list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *elem;

	elem = head;
	while (elem != NULL)
	{
		free(elem);
		elem = elem->next;
	}
}
