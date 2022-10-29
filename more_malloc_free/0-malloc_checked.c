#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *0-malloc_checked.c - Write a function that allocates memory using malloc.
 * @b: Unsigned int that needs to be allocated.
 * Return: Allocated
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *allocate;

	allocate = malloc(b);
	if (!allocate)
		exit(98);
	return (allocate);
}

