#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: the head of the linked list
 * @index: the index of the node to be deleted
 * Return: 1 if succeeded, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;
	dlistint_t *temp;
	size_t size = dlistint_len(ptr);
	unsigned int i;

	if ((index >= size) || (ptr == NULL))
		return (-1);

	if (index == 0)
	{
		if (size != 1)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}

		else
			*head = NULL;

		free(ptr);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
		ptr = ptr->next;

	if (index == size - 1)
	{
		free(ptr->next);
		ptr->next = NULL;
		return (1);
	}

	temp = ptr->next;
	ptr->next = ptr->next->next;
	ptr->next->next->prev = ptr;
	free(temp);

	return (1);
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

