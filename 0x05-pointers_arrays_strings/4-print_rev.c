#include "main.h"

/**
 * print_rev - a function to print a string in reverse
 *
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int i;
	int j;
	int len;

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (j = len - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
