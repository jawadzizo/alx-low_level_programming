#include "lists.h"

/**
 * sum_dlistint - find the sum of the data in the linked list
 * @head: the head of the linked list
 * Return: the sum of the linked list, or 0 if it's empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

