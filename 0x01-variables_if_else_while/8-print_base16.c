#include <stdio.h>

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
