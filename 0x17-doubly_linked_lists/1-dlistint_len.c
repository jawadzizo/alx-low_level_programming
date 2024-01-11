#include "lists.h"

/**
 * dlistint_len - checks for the size of the linked list
 * @h: the head to the linked list
 * Return: the size of the linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}

	return (size);
}

