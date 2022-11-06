#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: array to search in
 * @size: array size
 * @cmp: function for compare elements of array
 * Return: -1 if no match or size <= 0, else the matched result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(*(array + a)))
		{
			return (a);
		}
	}
	return (-1);
}
