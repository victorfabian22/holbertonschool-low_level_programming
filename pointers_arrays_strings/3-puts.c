#include "main.h"

/**
 * _puts - print a string
 * @str: string
 *
 * Retunr: lenght of the string
 */
void _outs(char *str)
{
	int i = *str++;

	while (i != 0)
	{
		_putchar(i);
		i = *str++;
	}
	_putchar(10);
}
