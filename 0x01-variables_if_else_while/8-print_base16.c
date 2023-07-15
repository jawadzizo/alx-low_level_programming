#include <stdio.h>
/**
 * main - a function to print hexadecimal characters
 *
 * Return: returns 0
 */

int main(void)
{
	int i = 48;
	int d = 97;

	while (i <= 57)
	{
		putchar(i);
		i = i + 1;
	}

	while (d <= 102)
	{
		putchar(d);
		d = d + 1;
	}

	putchar(10);

	return (0);
}
