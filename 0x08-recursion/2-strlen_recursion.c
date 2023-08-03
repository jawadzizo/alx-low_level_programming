#include "main.h"

/**
 * _strlen_recursion - a recursive function to return the lenght of a string.
 * @s: the string to check its lenght.
 * Return: returns the lenght of the string.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	else
		return (_strlen_recursion(s + 1) + 1);
}
