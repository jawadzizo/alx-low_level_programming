#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function to reallocate memory.
 * @ptr: a pointer ti the previously allocated memory.
 * @old_size: the old size of the previously allocated memory.
 * @new_size: the new size for the previously allocated memory.
 * Return: returns the new reallocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
