#include "main.h"

/**
 * times_table - print table
 *
 * Description: Print 9 times table
 * Return: void
 */

void times_table(void)
{
	int file, column, result;

	for (file = 0; file <= 9; file++)
	{
		_putchar('0');

		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');

			result = file * column;

			if (result <= 9)
			{
				_putchar(' ');
			} else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
			}
		_putchar('\n');
	}
}
