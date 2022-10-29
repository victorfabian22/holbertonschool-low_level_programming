#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *array_range - Write a function that creates an array of integers.
 * @min:          Min Int values.
 * @max:          Max Int values.
 * Return:        A pointer to a newly created array.
 */
int *array_range(int min, int max)
{
	int *allocate;
	int i, totalLen = max - min + 1;

	if (min > max)
		return (NULL);

	allocate = (int *)malloc(sizeof(int) * totalLen);

	if (!allocate)
		return (NULL);

	for (i = 0; min <= max; i++)
		allocate[i] = min++;

	return (allocate);
}
