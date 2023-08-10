#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function to multiply 2 integer arguments.
 * @argc: arguments count.
 * @argv: the arguments to multiply.
 * Return: returns 0.
 */

int main(int argc, char *argv[])
{
	int mul;
	int num1;
	int num2;
	int i;
	int j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= '0' && argv[i][j] <= '9')
			continue;

			else
			{
				printf("Error\n");
				exit(98);
			}
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%i\n", mul);

	return (0);
}
