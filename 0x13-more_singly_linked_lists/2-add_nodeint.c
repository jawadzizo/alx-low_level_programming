#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - a function to add new node to the beginning of a linked list.
 * @head: the linked list.
 * @n: the integer to assign to the new node.
 * Return: returns the new node address.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
