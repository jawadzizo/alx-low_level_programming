#include <stdio.h>
/**
 * main - a function to print the decimal digits
 *
 * Return: returns 0
 */

int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i = i + 1;
	}

	putchar(10);

	return (0);
}
