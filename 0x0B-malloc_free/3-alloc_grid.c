#include "main.h"

/**
 * **alloc_grid - Return a pointer to a 2 dimensional array of integers
 * @width: the with of grid
 * @height: the height of grid
 * Return: NULL or pointer
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int k, d;

	  ptr = malloc(sizeof(**ptr) * height);

	if (width <= 0 || height <= 0 || ptr == 0)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		ptr[k] = malloc(sizeof(int) * width);
		if (ptr[k] == 0)
		{
		free(ptr);
		for (d = 0; d <= height; d++)
			free(ptr[d]);
		return (0);
		}
		for (d = 0; d < width; d++)
			ptr[k][d] = 0;
	}
	return (ptr);
}
