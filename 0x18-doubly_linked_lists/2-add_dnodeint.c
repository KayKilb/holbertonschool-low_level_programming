#include "lists.h"
/**
 * add_dnodeint - adds node to top
 * @head: address of head linked list
 * @n: number
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL) /*if new equals nothing return 'NULL'*/
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		(*head)->prev = new; /*(*head is same as 'elem')*/
		new->next = *head;
		*head = new;
		return (new);
	}
}
