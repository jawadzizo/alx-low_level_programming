#include <stdio.h>
/**
 * main - a function to print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *
 * Return: returns 0
 */

int main(void)
{
	int i = 48;
	int d = 0;

	while (i <= 57)
	{
		putchar(i);
		i = i + 1;
		if (d <= 8)
		{
			putchar(44);
			putchar(32);
		}
		d = d + 1;
	}

	putchar(10);

	return (0);
}
