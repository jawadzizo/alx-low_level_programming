#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function to allocate memory for a 2D array.
 * @width: the number of colomns of the array.
 * @height: the number of rows of the array.
 * Return: returns the array otherwise.
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **surface;

	if (width <= 0 || height <= 0)
	return (NULL);

	surface = (int **)malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		surface[i] = (int *)malloc(sizeof(int) * width);

		for (j = 0; j < width; j++)
		surface[i][j] = 0;
	}

	return (surface);
}
