#include <stdio.h>
#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * @c: check letter c
 * Return: return 0
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	return (1);
	else
	return (0);
}
