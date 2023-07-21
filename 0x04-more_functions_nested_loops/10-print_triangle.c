#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function to print a triangle
 *
 * @n: how many lines in this triangle
 */

void print_diagonal(int n)
{
	int i;       /* space */
	int j;       /* # */
	int k;

	k = n + 1;

	for (; n > 0; n--)
	{
		for (i = n - 1; i > 0; i--)
			_putchar(' ');

		for (j = 0; j < k - n; j++)
			_putchar('#');

		_putchar('\n');
	}
}
