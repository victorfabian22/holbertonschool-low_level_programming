#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a
 * parameter on each element of an array.
 *
 * @array: parameter array
 * @size: size of array to work on
 * @action:     pointer to the function you need to use
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (!array || !action || size <= 0)
	{
		return;
	}
	for (a = 0; a <= (size - 1); a++)
	{
		action(*(array + a));
	}
}
