#include "main.h"



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
