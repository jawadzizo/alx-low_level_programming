#include <stdio.h>
#include "main.h"

/**
 * print_line - a function to print '_' n times
 *
 * @n: to print '_' n times
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}

	_putchar('\n');
}
