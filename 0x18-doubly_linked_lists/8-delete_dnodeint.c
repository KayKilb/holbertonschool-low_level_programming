#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node in list
 * @head: head of address
 * @index: index to delete
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *elem;
	unsigned int dex = 0;

	if ((*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			free(*head);
			*head = (*head)->next;
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		(*head) = NULL;
		return (1);
	}
	elem = *head;
	while (elem->next && dex != index)
	{
		dex++;
		elem = elem->next;
	}
	if (dex == index)
	{
		if (elem->next != NULL)
		{
			elem->next->prev = elem->prev;
			elem->prev->next = elem->next;
			free(elem);
		}
		else
		{
			elem->prev->next = NULL;
			free(elem);
		}
		return (1);
	}
	return (-1);
}
