#include "main.h"
#include <unistd.h>
/**
 * print_alphabet - a function to print alphabets
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');

}
