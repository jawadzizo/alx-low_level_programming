#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index in a linked list
 * @h: the head to the linked list
 * @idx: the index in which to insert the node
 * @n: the data of the new node
 * Return: the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr = *h;
	dlistint_t *new;
	size_t size = dlistint_len(*h);
	unsigned int i;

	if (idx > size)
		return (NULL);

	if (ptr == NULL || idx == 0)
		return (add_dnodeint(h, n));

	if (idx == size)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	for (i = 0; i < idx - 1; i++)
	{
		ptr = ptr->next;
	}

	new->n = n;
	new->next = ptr->next;
	new->prev = ptr;

	ptr->next = new;

	return (new);
}

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

