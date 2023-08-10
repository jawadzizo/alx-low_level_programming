#include "main.h"

/**
 * _strpbrk - a unction to return a pointer to the address of similar char.
 * @s: the string to return starting from the similar char.
 * @accept: the string to look for similar char in.
 * Return: returns a pointer of the similar char.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
