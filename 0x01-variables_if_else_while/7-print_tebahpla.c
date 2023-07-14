#include <stdio.h>

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
