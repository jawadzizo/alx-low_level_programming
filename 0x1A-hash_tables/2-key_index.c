#include "hash_tables.h"

/**
 * key_index - maps a key to a hash table index
 * @key: the key to map
 * @size: the sze of the hash table
 * Return: the index of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long hash = hash_djb2(key);
	unsigned long index = hash % size;

	return (index);
}

