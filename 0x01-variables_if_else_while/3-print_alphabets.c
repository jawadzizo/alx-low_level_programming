#include <stdio.h>
/**
 * main - a function to print all lowercase and uppercase alphbets
 *
 * Return: return 0
 */

int main(void)
{
	int i = 97;
	int d = 65;

	while (i <= 122)
	{
		putchar(i);
		i = i + 1;
	}

	while (d <= 90)
	{
		putchar(d);
		d = d + 1;
	}

	putchar(10);

	return (0);
}
