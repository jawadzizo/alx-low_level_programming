#include <stdio.h>
#include "main.h"

/**
 * print_triangle - a function to print a triangle
 *
 * @size: how many lines in this triangle
 */

void print_triangle(int size)
{
	int i;       /* space */
	int j;       /* # */
	int k;

	k = size + 1;

	for (; size > 0; size--)
	{
		for (i = size - 1; i > 0; i--)
			_putchar(' ');

		for (j = 0; j < k - size; j++)
			_putchar('#');

		_putchar('\n');
	}
}
