#include "main.h"



char *string_toupper(char *a)
{
	int i;
	int j;
	int len;

	len = 0;

	for (i = 0; a[i] != '\n'; i++)
		len++;

	for (j = 0; len > 0; j++)
	{

		if (a[j] >= 97 && a[j] <= 122)
			a[j] = a[j] - 32;

		else
			a[j] = a[j];

		len--;
	}

	return (a);
}
