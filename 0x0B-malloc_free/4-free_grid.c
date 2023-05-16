#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created by alloc_grid
 * @grid: Pointer to the 2-dimensional grid
 * @height: Height of the grid
 * This function frees the memory allocated for a 2-dimensional grid previous
 * ly created by the alloc_grid function. It iterates through each row
 * of the grid and frees the memory for each row, and then frees the memory
 * for the grid itself.
 * If the grid is NULL, or if the height is 0 or negative, the function
 * simply returns without performing any action.
*/
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return;
	for (int i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}
