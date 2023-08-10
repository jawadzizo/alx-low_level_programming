#include "main.h"

/**
 * _strspn - a function to get the length of a prefix substring.
 * @s: the first string.
 * @accept: the second string.
 * Return: returns the lenght of similar bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == s[j])
			{
				len++;
				break;
			}
		}
	}
	return (len + 1);
}
