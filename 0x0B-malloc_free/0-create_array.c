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
	if (size == 0)
	return (NULL);

	char *str = (char *)malloc(size);

	str[0] = c;

	return (str);
}
