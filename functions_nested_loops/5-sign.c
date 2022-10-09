#include "main.h"

/**
 * print_sign - print a number
 * @n: the number to be checked
 *
 * Description: Print 1 if >0, 0 if ==0 and -1 if 0<
 * Return: 1,0,-1
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{

		_putchar('-');
		return (-1);
	}

	_putchar('0');
	return (0);

}
