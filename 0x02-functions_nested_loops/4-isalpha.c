#include <stdio.h>
#include "main.h"
/**
 * _isalpha - a function that checks for alphacharacters
 * @c: to be checked if it an alphacharacter
 * Return: returns 0
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	return (1);
	else
	return (0);
}
