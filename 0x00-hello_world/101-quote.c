#include <stdio.h>

int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int i = 0;

	while (i <= sizeof(quote))
	{
		putchar(quote[i]);
		i = i + 1;
	}

	putchar(10);

	return (1);
}
