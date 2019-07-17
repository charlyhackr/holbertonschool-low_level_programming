#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid  created alloc_grid function.
 * @grid: double pointer 2d grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int li;

	for (li = 0; li < height; li++)
		free(grid[li]);
	free(grid);
}
