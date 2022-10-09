#include "main.h"

/**
 * print_last_digit - print a number
 * @a: the number to be printed
 *
 * Description: Print last digit of a number.
 * Return: last digit of a
 */

int print_last_digit(int a)
{
	int ld = a % 10;

	if (ld < 0)
		ld = ld * -1;

	_putchar ('0' + ld);
	return (ld);
}
