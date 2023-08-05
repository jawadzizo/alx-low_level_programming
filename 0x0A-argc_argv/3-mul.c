#include <stdio.h>

/**
 * main - a function to multiply 2 numbers arguments.
 * @argc: arguments' count.
 * @argv: the arguments to multiply.
 * Return: returns 0 if there are 2 arguments, and 1 if there are less than 2.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = argv[1] * argv[2];
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
