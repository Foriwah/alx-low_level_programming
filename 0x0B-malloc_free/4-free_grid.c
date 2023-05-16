#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free your grid
 * @grid: your array grid
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
