#include "main.h"

/**
 * print_alphabet - print chars
 *
 * Return: Always return 0
 */

void print_alphabet(void)
{
	int a;

	a = 97;

	while (a <= 122)
	{

		_putchar(a);

		a++;
	}
	_putchar('\n');
}
