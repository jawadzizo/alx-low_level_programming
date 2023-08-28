#include "lists.h"

/**
 * listint_len - a function to return the lenght of a linked list.
 * @h: the list to check.
 * Return: returns the lenght of the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
		h = h->next;

	return (count);
}
