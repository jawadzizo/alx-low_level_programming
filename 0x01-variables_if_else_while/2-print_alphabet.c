#include <stdio.h>
/**
 * main - a function to print the lower case of alphabets
 *
 * Return: returns 0
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i = i + 1;
	}

	putchar(10);

	return (0);
}
