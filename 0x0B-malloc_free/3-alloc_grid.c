#include "main.h"

/**
* alloc_grid - allocate elemento to a 2d array
* @width: width of the array
* @height: heigh of the array
* Return: returns a pointer to the array, NULL otherwise
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(height * sizeof(int));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		int *row;
		int j;

		row = (int *) malloc(width * sizeof(int));
		if (row == NULL)
		{
			int k;

			for (k = 0; k < height; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			row[j] = 0;
		}
		grid[i] = row;
	}

	return (grid);
}
