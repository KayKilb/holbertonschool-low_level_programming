#include "lists.h"
/**
 * get_dnodeint_at_index - inserts node at index
 * @head: head address of linked list
 * @index: index of list to go
 * Return: address of new node inserted or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *elem;
	unsigned int dex = 0;

	elem = head;
	if (head == NULL)
		return (NULL);
	while (elem != NULL && dex != index)
	{
		dex++;
		elem = elem->next;
	}
	if (index == dex)
		return (elem);
	else
		return (NULL);
}
