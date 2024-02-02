#include "hash_tables.h"

/**
 * hash_djb2 - performs the djb2 hashing algorithm on given key
 * @str: the key to hash it
 * Return: the hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;

	while (*str)
		hash = hash * 33 + *str++;

	return (hash);
}

