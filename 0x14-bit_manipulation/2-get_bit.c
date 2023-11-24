#include "main.h"

/**
 * get_bit - a function to detect the bit at a given index.
 * @n: the number to check.
 * @index: the index of the bit to be checked.
 * Return: returns the bit value at the index, or -1 if failed.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (index > (sizeof(n) * 8))
		return (-1);

	return (bit);
}
