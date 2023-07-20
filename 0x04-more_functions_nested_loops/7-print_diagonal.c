#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - a function to print a diagonal line on the terminal
 *
 * @n: how many times to print the diagonal
 */

void print_diagonal(int n)
{
	int k;
	int j = 0;

	for (; n > 0; n--)
	{
		for (k = 0; k < j; k++)
			_putchar(' ');

		j++;

		_putchar('/');
		_putchar('\n');
	}
}
