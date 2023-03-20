#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - func that adds a new node
 * at the end of the list_t list
 * @head: input
 * @str: input
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i, count = 0;
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		count++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)

	{
		*head = new;
		return (new);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	return (new);
}
