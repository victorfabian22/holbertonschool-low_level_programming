#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: string to be printed
 *
 * Description: Prints a string followed by a new line.
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
