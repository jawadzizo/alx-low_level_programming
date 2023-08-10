#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function to allocate memory to an array similar to calloc.
 * @nmemb: the number of memory blocks.
 * @size: the size of bytes of each block.
 * Return: returns a pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);

	if (str == NULL)
	return (NULL);

	return (str);
}
