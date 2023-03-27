#include "lists.h"
/**
 * sum_dlistint - sums all value of linked list
 * @head: head of address to retrieve sum
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *elem;
	int sum = 0;

	elem = head;
	while (elem != NULL)
	{
		sum += elem->n;
		elem = elem->next;
	}
	return (sum);
}
