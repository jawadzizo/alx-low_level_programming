#include "main.h"
#include <unistd.h>
/**
 * main - a function to print lowercase characters
 *
 * Return: return 0
 */

void print_alphabet(void);

void main(void)
{
	print_alphabet();
}

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');

}
