#include "main.h"

/**
 * _strchr - a function to search for a char in a string.
 * @s: the string to search for the char in.
 * @c: the char to look for.
 * Return: retuns the address of the char.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	return (NULL);
}
