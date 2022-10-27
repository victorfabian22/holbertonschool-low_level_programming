#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array
 * @width: int
 * @height: int
 * Return: 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL, x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = (int **)malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		p[x] = (int *)malloc(sizeof(int) * width);
		if (p[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(p[y]);
			}
			free(p);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			p[x][y] = 0;
		}
	}
	return (p);
}
