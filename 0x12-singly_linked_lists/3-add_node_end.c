#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function to add a new node to the end of a linked list.
 * @head: the linked list.
 * @str: the string to copy to the new linked list.
 * Return: returns the new node address.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *temp;

	int count = 0;

	while (str[count] != '\0')
		count++;

	new_node->str = strdup(str);

	new_node->len = count;

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
