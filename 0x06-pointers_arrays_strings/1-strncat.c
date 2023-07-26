#include "main.h"



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
