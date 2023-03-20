#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - func that frees list_t
 * @head: struct
 * Return - free
 */
void free_list (list_t *head)
{
	if (head == NULL)
		return;
	if (head ->next != NULL)
		free_list(head->next);
	free(head->str);
	free(head);
}
