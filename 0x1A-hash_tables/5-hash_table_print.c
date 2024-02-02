#include "hash_tables.h"

/**
 * hash_table_print - prints all elements of a hash table
 * @ht: the hash table to print its elements
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int printed = 0;
	unsigned long int i;

	if (ht == NULL)
		return;

	putchar('{');

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				if (printed != 0)
					printf(", ");

				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				printed++;
			}
		}
	}

	putchar('}');
	putchar('\n');
}

