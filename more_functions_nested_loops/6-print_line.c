#include "main.h"

/**
 * print_line - print a straight line
 * @n: number of times _ will be printed
 *
 * Description: Print  _ according to the parameter
 * Return: void
 */

void print_line(int n)
{
	while (n > 0)
	{
	_putchar('_');
	n--;
	}
	_putchar('\n');
}
