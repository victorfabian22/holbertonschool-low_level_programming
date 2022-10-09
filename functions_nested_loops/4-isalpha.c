#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: character to be evaluated
 *
 * Return: 0
 */
 int_isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
