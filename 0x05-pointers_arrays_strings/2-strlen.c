#include "main.h"

/**
 * _strlen - a function to count the lenght of a string
 *
 * @s: the string to count
 *
 * Return: returns the string's lenght
 */

int _strlen(char *s)
{
	int i;
	int len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}
