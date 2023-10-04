#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - entry point.
 *
 * Description: frees a 2 dimensional grid previously created.
 *
 * @grid: the 2d array.
 * @height: number of rows in the array.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
