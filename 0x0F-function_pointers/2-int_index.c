#include "function_pointers.h"

/**
 * int_index - a function that returns the index of an exact match.
 * @array: the array to look for the match in.
 * @size: the size of the array.
 * @cmp: a function pointer to check for the match.
 * Return: returns the index of the match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);

		i++;
	}

	return (-1);
}
