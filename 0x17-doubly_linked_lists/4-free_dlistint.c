#include "lists.h"

/**
 * free_dlistint - free the allocated memory for the linked list
 * @head: the head to the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

