#include "lists.h"

/**
 * print_dlistint - print the value of the given linked list
 * @h: the head to the linked list
 * Return: the sizeof the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		size++;
	}

	return (size);
}

