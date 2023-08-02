#include "main.h"

/**
 * is_prime_number - a function to find if a number if prime or not.
 * @n: the number to see if it's prime.
 * Return: returns 1 if prime and 0 if not.
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	return (0);

	else if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	return (0);

	else
	return (1);
}
