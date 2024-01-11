#include "lists.h"

/**
 * get_dnodeint_at_index - find the node at the given index
 * @head: the head of the node
 * @index: the index of the node to search for
 * Return: the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t size = dlistint_len(head);
	unsigned int i;

	if (index >= size)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
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

