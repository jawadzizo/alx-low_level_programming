#include "main.h"

/**
 * puts_half - a function to print the last half of a string
 *
 * @str: the string to be its second hald printed
 */

void puts_half(char *str)
{
	int i;
	int j;

	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (j = len / 2; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
