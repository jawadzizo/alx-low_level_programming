#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - a function to print the alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);

		_putchar('\n');
	}
}
