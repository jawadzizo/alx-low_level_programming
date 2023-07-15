#include <stdio.h>
/**
 * main - a function to print numbers from 00 to 99 except similar ones
 *
 * Return: returns 0
 */

int main(void)
{
	int p1 = 48;
	int p2 = 48;

	while (p1 <= 57)
	{
		if (p1 != p2)
		{
			putchar(p1);
			putchar(p2);
			p2 = p2 + 1;

			if (p2 == 58)
			{
				p2 = 48;
				p1 = p1 + 1;
			}

			if ((p2 != 58) && (p1 != 58))
			{
				putchar(44);
				putchar(32);
			}

		}

		else
		{
			p2 = p2 + 1;

			if (p2 == 58)
			{
				p2 = 48;
				p1 = p1 + 1;
			}
		}

	}

	putchar(10);

	return (0);
}
