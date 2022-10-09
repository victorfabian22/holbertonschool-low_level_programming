#include "main.h"

/**
 * _isdigit - check if digit
 *@c: the digit to be checked
 *
 * Description: return 1 if digit and 0 if not
 * Return: if digit 1 otherwise 0
 */

int _isdigit(int c)
{

	if ((c >= 48 && c <= 57))
	{
		return (1);
	}

	return (0);

}
