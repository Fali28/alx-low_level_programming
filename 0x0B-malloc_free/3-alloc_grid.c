#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid - a program that returns a
*pointer to a 2 dimensional array of integers
*@height: height of the grid
*@width: width of the grid
*Return: dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int q, r, s, t;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	for (q = 0; q < height; q++)
	{
		grid[q] = malloc(width * sizeof(int *));
		if (grid[q] == NULL)
		{
			for (r = 0; r < q; r++)
			{
				free(grid[r]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (s = 0; s < height; s++)
	{
		for (t = 0; t < width; t++)
			grid[s][t] = 0;
	}
	return (grid);
}
