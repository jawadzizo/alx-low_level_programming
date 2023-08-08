#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function to create a string with specific letter.
 * @size: the size of the string.
 * @c: the char to begin the string with.
 * Return: return NULL if size=0, or the string if size>0.
 */

char *create_array(unsigned int size, char c)
{
	char *str = (char *)malloc(size + 1);
	unsigned int i;

	if (size == 0)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;

	return (str);
}
