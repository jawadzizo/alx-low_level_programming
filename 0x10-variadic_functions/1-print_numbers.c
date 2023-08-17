#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a variadic function to print numbers.
 * @separator: a string to print between numbers.
 * @n: the number of numbers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		printf("%d", x);

		if (separator != NULL && i != (n - 1))
		printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
