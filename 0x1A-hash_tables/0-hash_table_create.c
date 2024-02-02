#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the needed hash table
 * Return: a pointer to a hash table, or NULL if failed
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;

	table->array = malloc(sizeof(hash_node_t *) * table->size);
	if (table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}

