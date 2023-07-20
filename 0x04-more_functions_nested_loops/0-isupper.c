#include <stdio.h>
#include "main.h"
/**
 * _isupper - a function to check if a character is uppercase
 * @c: to be checked if it's uppercase
 * Return: returns 1 if uppercase, or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
