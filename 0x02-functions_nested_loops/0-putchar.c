#include "main.h"
#include <unistd.h>
/**
 * main - a function to print _putchar
 *
 * _putchar - a function to print characters
 *
 * Return: returns 0
 */

int main(void)
{
	char text[] = "_putchar";

	unsigned long int i = 0;

	for (i = 0; i <= (sizeof(text) - 2); i++)
		_putchar(text[i]);

	_putchar('\n');

	return (0);
}
