#include <stdio.h>

/**
 * main - a function to multiply 2 numbers arguments.
 * @argc: arguments' count.
 * @argv: the arguments to multiply.
 * Return: returns 0 if there are 2 arguments, and 1 if there are less than 2.
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
