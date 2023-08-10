#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function to return a pointer ro an array.
 * @min: the minimum number.
 * @max: the maximum number.
 * Return: returns the pointer to the array.
 */

int *array_range(int min, int max)
{
	int *str;
	int len;
	int i;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	str = malloc(sizeof(int) * len);

	if (str == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	{
		str[i] = min;
		min++;
	}

	return (str);
}
