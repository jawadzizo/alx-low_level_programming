#include "hash_tables.h"

/**
 * hash_table_delete - deletes thw whole hash table with its elements
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	hash_node_t *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node;
				free(temp->key);
				free(temp->value);

				node = node->next;

				free(temp);
			}
		}
	}

	free(ht->array);
	free(ht);
}

