#include "main.h"

/**
 * flip_bits - a function to find how many flips needed to get a number.
 * @n: the first number.
 * @m: the second number.
 * Return: returns how many flips needed.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lenght = (n > m) ? n : m;
	int flips = 0;

	while (lenght != 0)
	{
		if ((n & 1) != (m & 1))
			flips++;

		m = m >> 1;
		n = n >> 1;
		lenght = lenght >> 1;
	}

	return (flips);
}
