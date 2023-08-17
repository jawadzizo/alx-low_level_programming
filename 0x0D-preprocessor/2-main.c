#include "main.h"

/**
 * main - a function to print the name of the file.
 * Return: returns 0.
 */

int main(void)
{
	int i;

	for (i = 0; __FILE__[i] != '\0'; i++)
		_putchar(__FILE__[i]);

	_putchar('\n');

	return (0);
}
