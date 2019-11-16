#!/usr/bin/python3
"""Define an island perimeter function."""


def island_perimeter(grid):
    """Return the perimiter of an island."""
    
    width = len(grid[0])
    height = len(grid)
    borders = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    borders += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    borders += 1
    return size * 4 - borders * 2
