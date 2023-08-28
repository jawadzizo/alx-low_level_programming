#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function to print a linked list.
 * @h: the linked list to print.
 * Return: returns the count of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);

		count++;
		h = h->next;
	}

	return (count);
}
