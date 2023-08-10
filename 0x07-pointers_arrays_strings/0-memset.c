#include "main.h"

/**
 * _memset - a function to fill a memory with specific char.
 * @s: the array to fill.
 * @b: the char to fill the array with.
 * @n: the number of bytes to fill s.
 * Return: returns the array s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
