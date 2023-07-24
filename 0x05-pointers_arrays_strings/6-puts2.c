#include "main.h"

/**
 * puts2 - a function to print every other character of a string
 *
 * @str: the string in context
 */

void puts2(char *str)
{
	int i;
	int j;

	int len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j <= len - 1 ; j = j + 2)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
