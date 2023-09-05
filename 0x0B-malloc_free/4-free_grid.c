#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid.
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
