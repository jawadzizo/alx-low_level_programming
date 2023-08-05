#include <stdio.h>

/**
 * main - a function to print arguments' count.
 * @argc: arguments' count.
 * @argv: the arguments vector.
 * Return: returns 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
