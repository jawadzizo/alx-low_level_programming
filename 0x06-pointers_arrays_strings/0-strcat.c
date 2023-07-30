#include "main.h"

/**
 * _strcat - a function to concatenate two strings.
 * @dest: the string to be copied to.
 * @src: the string to copy.
 * Return: returns the final dest string.
 */

char *_strcat(char *dest, char *src)
{
	int lendest = 0;
	int lensrc = 0;
	int i;
	int j;
	int k;
	int l = 0;

	for (i = 0; dest[i] != '\0'; i++)
		lendest++;

	for (j = 0; src[j] != '\0'; j++)
		lensrc++;

	for (k = lendest; lensrc > 0 ; k++)
	{
		dest[k] = src[l];

		l++;
		lensrc--;
	}

	return (dest);
}
