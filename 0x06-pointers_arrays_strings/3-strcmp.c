#include "main.h"



int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	int total1 = 0;
	int total2 = 0;

	int total;

	for (i = 0; s1[i] != '\0'; i++)
		total1 = total1 + s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		total2 = total2 + s2[j];

	total = total2 - total1;

	return (total);
}
