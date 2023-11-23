#include <stdio.h>
#include <stdlib.h>

/**
 * print_binary - a function to print a decimal number in binary.
 * @n: the number to print in binary.
 */

void print_binary(unsigned long int n)
{
	static int x = 1;

	if (n == 0)
	{
		if (x > 0)
		{
			_putchar('0');
			return;
		}

		else
			return;
	}


	else
	{
		x--;

		print_binary(n >> 1);

		if ((n & 1) == 1)
			_putchar('1');

		else
			_putchar('0');
	}
}
