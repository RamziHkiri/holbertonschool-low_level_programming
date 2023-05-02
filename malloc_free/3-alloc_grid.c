#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * alloc_grid - allocated a matrice
 * @width:integer
 * @height:integer
 * Return:grid or NULL if the allocation failed
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i]== NULL)
		{
			for(; i >= 0 ; i--)
				free(grid[i]);
		
		free(grid);
		return (NULL);
		}
	}
	for (i = 0 ; i < height ; i++)
	{
		for (j = 0 ; j < width ; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
