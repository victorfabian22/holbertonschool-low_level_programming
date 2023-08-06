#include "search_algos.h"

/**
 * print_array - Prints the array
 *@array: Pointer to array
 *@low: Value
 *@upp: Value
 */
void print_array(int *array, int low, int upp)
{
	printf("Searching in array: ");

	while (low <= upp)
	{
		if (low == upp)
		{
			printf("%d\n", array[low]);
			break;
		}
		printf("%d, ", array[low++]);
	}
}

/**
 * binary_search - Binary search algorithm
 *@array: Pointer to array
 *@size: Number of elements in array
 *@value: Value to search for
 *
 *Return: Search value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t middler, lowerLimit = 0, upperLimit = size - 1;

	if (array != NULL)
	{
		while (upperLimit >= lowerLimit)
		{
			print_array(array, lowerLimit, upperLimit);
			middler = (lowerLimit + upperLimit) / 2;

			if (array[middler] == value)
				return (middler);
			if (array[middler] < value)
				lowerLimit = middler + 1;
			if (array[middler] > value)
				upperLimit = middler - 1;
		}
	}
	return (-1);
}
