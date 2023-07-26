#include "main.h"



void reverse_array(int *a, int n)
{
	int i;
	int j;

	int *b;

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}

	for (j = 0; n > 0; j++)
	{
		a[j] = b[n - 1];
		n--;
	}

}
