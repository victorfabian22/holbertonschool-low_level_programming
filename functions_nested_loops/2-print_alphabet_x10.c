#include "main.h"

/**
 * print_alphabet_x10 - print chars
 *
 * Description: Print lowercase alphabet 10 times followed by a newline
 * Return: Always return 0
 */

void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 0;
	while (b < 10)
	{
		a = 97;

		while (a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
