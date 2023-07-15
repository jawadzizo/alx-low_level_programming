#include <stdio.h>
/**
 * main - a function to print the phrase bellow without using printf
 *
 * Return: returns 1
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	unsigned long i = 0;

	while (i <= sizeof(quote))
	{
		putchar(quote[i]);
		i = i + 1;
	}

	putchar(10);

	return (1);
}
