#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*free_grid - a program that frees a 2 dimensional grid
*previously created by your alloc_grid function
*@height: height of the grid
*@grid: the address of the two dimensional grid
*Return: 0
*/
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
