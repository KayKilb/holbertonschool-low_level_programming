#include "lists.h"
#include "2-add_nodeint.c"
/**
* insert_nodeint_at_index - inserts new node at index idx
* @head: head
* @n: data
* @idx: index
*
* Return: address of new node, or NULL upon failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int count = 0;

	if (idx == 0)
	{
		add_nodeint(head, n);
		return (*head);
	}
	temp = *head;
	while (count < idx - 1)
	{
		if (!(temp->next))
			return (NULL);

		temp = temp->next;
		count++;
	}
	new = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	new->n = n;

	return (new);
}
