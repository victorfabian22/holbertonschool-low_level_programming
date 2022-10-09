#include "main.h"

/**
 * print_most_numbers - print numbers
 *
 * Description: Print numbers except 2 and 4 followed by a newline
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	a = 48;

	while ((a >= 48) && (a <= 57))
	{
		if (a == 50)
		{
			a++;
		} else if (a == 52)
		{
			a++;
		} else
		{
		_putchar(a);

		a++;
		}
	}
	_putchar('\n');
}
