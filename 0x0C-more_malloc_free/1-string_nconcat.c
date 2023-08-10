#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function to concatenate 2 strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of characters to use from the second string.
 * Return: returns the new concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int i = 0;
	int j = 0;
	int len1;
	unsigned int len2;
	int len;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (len1 = 0; *(s1 + i) != '\0'; len1++)
	i++;

	for (len2 = 1; *(s2 + j) != '\0'; len2++)
	j++;

	if (n >= len2)
	len = len1 + len2;

	else
	len = len1 + n;

	string = (char *)malloc(len);

	if (string == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	string[i] = s1[i];

	for (j = 0; i < len; j++, i++)
	string[i] = s2[j];

	string[i] = '\0';

	return (string);
}
