#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates memory for a 2D int array
 * @width: number of columns of matrix
 * @height: number of rows of matrix
 *
 * Return: pointer to allocated memory
 */

int **alloc_grid(int width, int height)
{
	char **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*Allocate memory for rows*/
	grid = (int **)malloc(sizeof(int *) * height);

	/*Check if memory allocation failed*/
	if (grid == NULL)
		return (NULL);

	/*Allocate memory for columns*/
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);

		/*Check if memory allocation failed*/
		if (grid[i] == NULL)
		{
			/*free grid*/
			for (k = i; k >= 0; k--)
				free(grid(k));
			free(grid);
			return (NULL);
		}
	}

	/*Initialize grid to zero*/
	for (j = 0; j < height; j++)
	{
		for (l = 0; l < width; l++)
			grid[j][l] = 0;
	}

	return (grid);
}

