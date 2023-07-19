#include <stdio.h>
#include "main.h"
/**
 * print_sign - a function to print the sign of the integer
 * @n: to be checked for its sign
 * Return: returns the sign
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
