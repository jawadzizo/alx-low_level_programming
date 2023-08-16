#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a function that iterate other functin on an array elements.
 * @array: the array in context.
 * @size: the size of the array.
 * @action: the pointer to the other function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
