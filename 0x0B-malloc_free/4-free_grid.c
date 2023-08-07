#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: grid of integers
 * @height: height of grid
 * Return: 0 success
 */
void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
