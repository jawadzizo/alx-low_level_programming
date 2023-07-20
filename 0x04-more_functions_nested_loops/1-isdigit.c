#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function to check if a character is a digit
 * @c: to be checked if it's a digit
 * Return: return 1 if a digit, or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
