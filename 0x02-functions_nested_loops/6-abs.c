#include <stdio.h>
#include "main.h"
/**
 * _abs - a function to print the absolute value of an integer
 * @n: to be checked for its absolute value
 * Return: returns n
 */

int _abs(int n)
{

	if (n > 0)
		n = n;

	else if (n == 0)
		n = n;

	else
		n = n * -1;

	return (n);
}
