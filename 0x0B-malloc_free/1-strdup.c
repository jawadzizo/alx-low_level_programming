#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function to duplicate a string.
 * @str: the string to duplicate.
 * Return: return a pointer to the duplicated string, or NULL if str=NULL.
 */

char *_strdup(char *str)
{
	char *string = (char *)malloc(sizeof(str));
	unsigned int i;

	if (str == NULL)
	return (NULL);

	for (i = 0; i < sizeof(str); i++)
	string[i] = str[i];

	return (string);
}
