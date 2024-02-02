#include "hash_tables.h"

/**
 * hash_table_get - searches the hash table for the given key
 * @ht: the hash table to search in
 * @key: the key to search for
 * Return: the key, or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *ptr;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];

	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);

		ptr = ptr->next;
	}

	return (NULL);
}
