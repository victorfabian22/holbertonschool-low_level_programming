#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Write a function that creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: a
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = NULL;

	a = (char *)malloc(sizeof(char) * size);
	if (a == NULL)
	{
		return (NULL);
	}
	if (size != 0)
	{
		for (i = 0; i <= size; i++)
		{
			a[i] = c;
		}
		return (a);
	}
	free(a);
	a = NULL;
	return (NULL);
}
