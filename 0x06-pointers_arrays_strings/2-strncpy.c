#include "main.h"



char *_strncpy(char *dest, char *src, int n)
{
	int lendest = 0;
	int lensrc = 0;
	int i;
	int j;
	int k;
	int l = 0;

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
