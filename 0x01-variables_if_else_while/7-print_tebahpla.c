#include <stdio.h>
/**
 * main - a function to print lowercase characters backward
 *
 * Return: returns 0
 */

int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i = i - 1;
	}

	putchar(10);

	return (0);
}
