#include <stdio.h>

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i = i + 1;
	}

	int d = 65;

	while (d <= 90)
	{
		putchar(d);
		d = d + 1;
	}

	putchar(10);

	return (0);
}
