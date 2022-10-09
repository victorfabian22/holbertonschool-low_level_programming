#include "main.h"

/**
 * print_numbers - print numbers
 *
 * Description: Print numbers followed by a newline
 * Return: void
 */

void print_numbers(void)
{
	int a;

	a = 48;

	while (a <= 57)
	{

		_putchar(a);

		a++;
	}
	_putchar('\n');
}
