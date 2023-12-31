#include "main.h"

/**
 * _pow_recursion - a recursive function to return x^y.
 * @x: the number to muliply by the power y.
 * @y: the exponant.
 * Return: return x^y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);

	if (y == 0)
	return (1);

	else if (y == 1)
	return (x);

	else
	return (x * _pow_recursion(x, (y - 1)));
}
