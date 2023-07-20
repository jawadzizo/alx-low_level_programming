#include <stdio.h>
#include "main.h"

/**
 * print_square - a function to print a square with #
 *
 * @size: the size of the square
 */

void print_square(int size)
{
	int i;
	int j = size;

	for (; size > 0; size--)
	{
		for (i = j; i > 0; i--)
		_putchar('#');

		_putchar('\n');
	}
}
