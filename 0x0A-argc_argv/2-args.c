#include <stdio.h>

/**
 * main - a function to print the arguments one per line.
 * @argc: arguments' count.
 * @argv: the arguments to print.
 * Return: returns 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
