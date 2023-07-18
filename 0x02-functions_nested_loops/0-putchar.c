#include "main.h"
/**
 * main - a function to print _putchar
 *
 * Return: returns 0
 */

int main(void)
{
	char text[] = "_putchar";

	unsigned long int i = 0;

	for (i = 0; i <= sizeof(text); i++)
	_putchar(text[i]);

	_putchar('\n');

	return (0);
}
