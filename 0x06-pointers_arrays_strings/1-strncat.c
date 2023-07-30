#include "main.h"

/**
 * _strncat - a function to concatenate two strings
 * depending on n number of bytes of src.
 *
 * @dest: the destination string.
 * @src: the source string.
 * @n: number of characters to copy from src to dest.
 * Return: returns the final value of dest.
 */

char *_strncat(char *dest, char *src, int n)
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

	if (n <= lendest)
	{
		for (k = lendest; n > 0 ; k++)
		{
			dest[k] = src[l];

			l++;
			n--;
		}
	}

	else
	{
		for (k = lendest; lendest > 0 ; k++)
		{
			dest[k] = src[l];

			l++;
			lendest--;
		}
	}

	return (dest);
}
