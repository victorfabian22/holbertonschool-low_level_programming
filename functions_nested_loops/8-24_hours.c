#include "main.h"

/**
 * jack_bauer - print minutes
 *
 * Description: Print every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	for (; h < 24; h++)
	{
		m = 0;

		for (; m < 60; m++)
		{
		_putchar('0' + (h / 10));
		_putchar('0' + (h % 10));
		_putchar(':');
		_putchar('0' + (m / 10));
		_putchar('0' + (m % 10));
		_putchar('\n');
		}
	}
}
