#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string to be reversed
 *
 * Description: Prints a string in reverse followed by a new line.
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
