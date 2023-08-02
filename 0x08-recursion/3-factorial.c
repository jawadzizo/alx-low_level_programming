#include "main.h"

/**
 * factorial - a recursive function to return factorial of a number.
 * @n: the number to be returned as factorial.
 * Return: return the factorial number.
 */

int factorial(int n)
{
	if (n == 1)
	return (1);

	else
	return (n * factorial(n - 1));
}
