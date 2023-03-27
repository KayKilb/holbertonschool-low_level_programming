#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at
 * index of dlistint_t
 * @head: pointer to pointer to list
 * @index: index
 * Return: 1 or -1
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *elem = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	elem = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(elem);
		return (1);
	}
	while (elem->next != NULL)
	{
		if (count == index)
		{
			elem->next->prev = elem->prev;
			elem->prev->next = elem->next;
			free(elem);
			return (1);
		}
		elem = elem->next;
		count++;
	}

	return (-1);
}
