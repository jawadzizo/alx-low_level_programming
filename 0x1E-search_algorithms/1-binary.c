#include "search_algos.h"

/**
 * binary_search - a binary search algorithm
 * @array: the array to perform the binary search on
 * @size: the size of the given array
 * @value: the value to search for
 * Return: the index of the value, or -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int start, end, mid;

	if (array == NULL)
		return (-1);

	start = 0;
	end = (int)size - 1;
	mid = (start + end) / 2;

	while (size != 0)
	{
		print_array(array, start, end);

		if (array[mid] == value)
			return (mid);

		else if (value > array[mid])
			start = mid + 1;

		else
			end = mid - 1;

		mid = (start + end) / 2;
		size /= 2;
	}

	return (-1);
}

/**
 * print_array - prints a given array
 * @array: the array to perform the linear search on
 * @start: the beginning of the array
 * @end: the end of the array
 */
void print_array(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");

	for (i = start; i <= end; i++)
	{
		printf("%i", array[i]);

		if (i != end)
			printf(", ");
	}

	printf("\n");
}
