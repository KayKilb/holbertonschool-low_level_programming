#include "lists.h"
/**
 * add_dnodeint_end - adds node at end
 * @head: head of address for linked list
 * @n: number of new value for new node
 * Return: address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *elem, *new; /*(*elem = new tail, *new = current tail)*/

	elem = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	/* initialize new node */
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	/*adds node to end of list*/
	if ((*head) == NULL)
	/**
	 * if head pointer is NULL, new node becomes
	 * first in the list & points to NULL
	 */
	{
		*head = new;
		return (new);
	}
	while (elem->next)
	{
		elem = elem->next;
	}
	new->prev = elem;
	elem->next = new;
	return (new);
}
