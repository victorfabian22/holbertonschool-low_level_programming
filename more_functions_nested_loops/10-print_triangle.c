#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 *
 * Description: Print a triangle according to the received size
 * Return: void
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size - a; b > 0; b--)
				_putchar(' ');

			for (b = 0; b < a; b++)
				_putchar('#');

			_putchar('\n');
		}

	}
	else
	{
		_putchar('\n');
	}
}

