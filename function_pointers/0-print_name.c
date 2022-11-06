#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: name to print
 * @f: function that will print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		name = malloc(sizeof(char *));
		if (name == NULL)
		{
			return;
		}
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}

