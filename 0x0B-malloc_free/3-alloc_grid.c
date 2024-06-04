#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int grid[width][height];
	int i, j;
	int *ptr;

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}

	ptr = malloc(sizeof(grid));
	if (ptr == NULL)
		return (NULL);

	return ptr;
}


