#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function to duplicate a string.
 * @str: the string to duplicate.
 * Return: return a pointer to the duplicated string, or NULL if str=NULL.
 */

char *_strdup(char *str)
{
	char *string;
	int i;
	int len;
	int j = 0;

	if (str == NULL)
	return (NULL);

	for (len = 1; *(str + j) != '\0'; len++)
	{
		j++;
	}

	string = (char *)malloc(len);

	for (i = 0; i < len; i++)
	string[i] = str[i];

	return (string);
}
