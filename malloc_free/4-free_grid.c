#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free a grid
 * @grid:a greed to bee freed
 * @height: height of the grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
