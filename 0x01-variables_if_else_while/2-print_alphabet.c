#include <stdio.h>

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
