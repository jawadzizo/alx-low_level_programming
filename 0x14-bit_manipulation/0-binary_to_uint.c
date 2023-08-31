#include <stddef.h>


/**
 * binary_to_uint - a function to convert a binary string to integer.
 * @b: the binary string to convert to integer.
 * Return: returns the integer value, or 0 if it fails.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i;
	unsigned int value = 0;
	int now = 1;

	if (b == NULL)
	return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		return (0);

		len++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		value += now;

		else
		value = value;

		now *= 2;
	}

	return (value);
}
