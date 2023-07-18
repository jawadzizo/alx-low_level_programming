#include "main.h"
#include <unistd.h>
/**
 * main - a function to print _putchar
 *
 * _putchar - a function to print characters
 *
 * Return: returns 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(void)
{
	char text[] = "_putchar";

	for (int i = 0; i <= sizeof(text); i++)
		_putchar(text[i]);

	_putchar('\n');

	return (0);
}
