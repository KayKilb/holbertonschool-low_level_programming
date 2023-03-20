#include "lists.h"
/**
 * free_listint - Entry point
 * @head: head
 * Return: freeing memory
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
