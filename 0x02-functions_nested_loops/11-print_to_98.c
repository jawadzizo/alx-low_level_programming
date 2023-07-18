#include <stdio.h>
#include "main.h" 

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}

	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}

	else
	printf("%d", n);
	printf("\n");
}
