#include "main.h"

/**
 * clear_bit - a function to set 0 at a given index.
 * @n: the number to set to 0 in the given index.
 * @index: the index to be set to 0;
 * Return: returns 1 for success.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit = (*n >> index) & 1;
	int value = 1;

	value = value << index;

	if (bit)
		*n = *n ^ value;

	return (1);
}
