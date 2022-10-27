#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *free_grid - Write a function that frees a 2 dimensional grid
 * @grid: **int
 *@height: int
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i <= height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}	
