#include "main.h"

/**
 * free_grid - frees dynamically allocated grid
 *
 * @grid: pointer to grid.
 * @height: grid height
*/

void free_grid(int **grid, int height)
{
	while (*grid++ != NULL)
	{
		int i;

		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}

}
