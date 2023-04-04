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

	grid = (int **) malloc(height * sizeof(int));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		int *row;
		int j;

		row = (int *) malloc(width * sizeof(int));
		if (row == NULL)
		{
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
