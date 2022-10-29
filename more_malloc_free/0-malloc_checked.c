#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - Write a function that allocates memory using malloc.
 * @b:               Unsigned int that needs to be allocated.
 * Return:           A pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *allocate;

	allocate = malloc(b);
	if (!allocate)
		exit(98);
	return (allocate);
}
