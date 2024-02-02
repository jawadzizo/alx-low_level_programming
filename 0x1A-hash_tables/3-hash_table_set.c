#include "hash_tables.h"

/**
 * hash_table_set - adds a key to the hash table
 * @ht: the hash table to modify
 * @key: the key of the new element
 * @value: the value of the new element
 * Return: 1 if succeeded, or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);


	node->key = malloc(sizeof(char) * strlen(key) + 1);
	node->value = malloc(sizeof(char) * strlen(value) + 1);
	if (node->key == NULL || node->value == NULL)
		return (0);

	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;


	if (ht->array[index] != NULL)
		node->next = ht->array[index];

	ht->array[index] = node;

	return (1);
}

