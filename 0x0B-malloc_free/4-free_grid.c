#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up to a 2d grid
 * @grid: double pointer 2d grid
 * @height: height of a grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
