#include <stdio.h>


/**
 * _strlen - aàfunction to detect a string's lenght.
 * @string: the string to find its lenght.
 * Return: returns the lenght of the string.
 */


unsigned int _strlen(const char *string)
{
	int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}


/**
 * binary_to_uint - a function to convert a binary string into integer.
 * @b: the binary string to convert.
 * Return: returns the integer, or 0 if failed.
 */


unsigned int binary_to_uint(const char *b)
{
	int lenght;
	int value = 0;
	int current = 1;
	int i;

	if (b == NULL)
		return (0);

	lenght = _strlen(b);

	for (i = lenght - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			value += current;

		else if (b[i] == '0')
			value = value;

		else
			return (0);

		current = current * 2;
	}

	return (value);
}
