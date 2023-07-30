#include "main.h"

/**
 * reverse_array - a function to reverse an array.
 * @a: the array to be reversed.
 * @n: number of array's elements.
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int b[n];

	for (i = 0; i < n; i++)
	{
		*(b + i) = *(a + i);
	}

	for (j = 0; n > 0; j++)
	{
		*(a + j) = *(b + (n - 1));
		n--;
	}
}
