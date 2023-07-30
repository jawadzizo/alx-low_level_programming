#include "main.h"

/**
 * _strncpy - a function to copy a string.
 * @dest: the string to copy to.
 * @src: the string to copy.
 * @n: number of characters to copy.
 * Return: return the final value of dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lendest = 0;
	int lensrc = 0;
	int i;
	int j;
	int k;

	for (i = 0; src[i] != '\0'; i++)
		lensrc++;

	for (j = 0; dest[j] != '\0'; j++)
		lendest++;

	if (n <= lendest)
	{
		for (k = 0; k < n ; k++)
		{
			dest[k] = src[k];
		}
	}

	else
	{
		for (k = 0; k < lendest ; k++)
		{
			dest[k] = src[k];

		}
	}

	return (dest);
}
