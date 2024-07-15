#include "search_algos.h"

/**
 * linear_search - a linear search algorithm
 * @array: the array to perform the linear search on
 * @size: the size of the given array
 * @value: the value to search for
 * Return: the index of the value, or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
