#include <stdio.h>

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
			i = i + 1;
		}
		else
		{
			i = i + 1;
		}
	}

	putchar(10);

	return (0);
}
