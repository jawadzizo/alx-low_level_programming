#include "main.h"

/**
 * set_bit - a function to set 1 at a given index.
 * @n: the number to set 1 at a given index.
 * @index: the index to be set to 1.
 * Return: returns 1 after success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int value = 1;

	if (index > (sizeof(*n) * 8))
		return (-1);

	value = value << index;

	*n = *n | value;

	return (1);
}
