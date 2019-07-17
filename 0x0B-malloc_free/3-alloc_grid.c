#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * Description: Each element of the grid should be initialized to 0
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int fi, cj;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (fi = 0; fi < height; fi++)
	{
		grid[fi] = malloc(width * sizeof(**grid));
		if (grid[fi] == NULL)
		{
			for (fi--; fi >= 0; fi--)
				free(grid[fi]);
			free(grid);
			return (NULL);
		}
		for (cj = 0; cj < width; cj++)
			grid[fi][cj] = 0;
	}

	return (grid);
}
