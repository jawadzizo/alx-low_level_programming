#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function to check if malloc failed.
 * @b: the number of bytes to allocate.
 * Return: returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL || b == INT_MAX)
	{
		exit(98);
	}

	return (p);
}
