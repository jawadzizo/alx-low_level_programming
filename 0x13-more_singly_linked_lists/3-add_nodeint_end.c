#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - a function to add a new node to the end of a linked list.
 * @head: the linked list.
 * @n: the integer to assign to the new linked list.
 * Return: returns the new node address.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp;

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
