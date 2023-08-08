#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function to concatenate 2 strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: returns the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int i = 0;
	int j = 0;
	int len1;
	int len2;
	int len;

	if (s1 == NULL)
	return (NULL);

	for (len1 = 0; *(s1 + i) != '\0'; len1++)
	i++;

	for (len2 = 1; *(s2 + j) != '\0'; len2++)
	j++;

	len = len1 + len2;

	string = (char *)malloc(len);

	for (i = 0; i < len1; i++)
	string[i] = s1[i];

	for (j = 0; i < len; j++, i++)
	string[i] = s2[j];

	return (string);
}
