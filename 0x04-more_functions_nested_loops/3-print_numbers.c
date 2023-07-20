#include <stdio.h>
#include "main.h"

/**
 * print_numbers - a function to print numbers from 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
