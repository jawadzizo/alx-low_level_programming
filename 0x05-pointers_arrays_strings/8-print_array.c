#include <stdio.h>
#include "main.h"

/**
 * print_array - a function to print an array in one line
 *
 * @a: the array to be written in one line
 *
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);

		if (a[i] != a[n - 1])
		printf(", ");
	}

	printf("\n");
}
