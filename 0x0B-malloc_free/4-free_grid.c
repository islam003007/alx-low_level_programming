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
		free(*grid);
	}
	free(grid);
}
