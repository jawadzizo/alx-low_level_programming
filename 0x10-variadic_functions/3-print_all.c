#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - a variadic  function to print all data types in arguments.
 * @format: a char pointer to determine which data type to print.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i;
	char *str;
	char c;
	float f;
	int d = 0;
	int len = 0;
	int j = 0;
	char *separator = ", ";

	va_start(args, format);

	while (format[j] != '\0')
	{
		len++;
		j++;
	}

	while (format[d] != '\0')
	{
		if (format[d] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}

		else if (format[d] == 'i')
		{
			i = va_arg(args, int);
			printf("%i", i);
		}

		else if (format[d] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
		}

		else if (format[d] == 's')
		{
			str = va_arg(args, char*);
			printf("%s", str);
		}

		if ((d != len - 1) &&
		(format[d] == 's' ||
		format[d] == 'i' ||
		format[d] == 'f' ||
		format[d] == 'c'))
		printf("%s", separator);

		d++;
	}

	printf("\n");

	va_end(args);
}
