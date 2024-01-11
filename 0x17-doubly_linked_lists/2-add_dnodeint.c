#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a linked list
 * @head: the head of the linked list
 * @n: the value to assign to the new node
 * Return: a poinetr to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		printf("error allocating memory for the new node\n");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}

