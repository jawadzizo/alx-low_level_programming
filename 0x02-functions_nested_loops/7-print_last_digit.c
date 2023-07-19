#include "main.h"

/**
 * print_last_digit - a function to print the last digit of a number
 */

int print_last_digit(int n)
{
	if (n >= 0)
	n = n % 10 + 48;

	else
	n = -n % 10 + 48;

	_putchar(n);
	_putchar(n);

	return (n);
}
