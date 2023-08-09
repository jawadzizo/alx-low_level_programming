#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function to free the allocated memory for alloc_grid function.
 * @grid: the function to deallocate memory from.
 * @height: the number of arrays.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (int i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
