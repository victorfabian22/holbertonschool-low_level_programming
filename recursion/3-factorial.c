#include "main.h"
#include <string.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculate it's factorail
 *
 * Description: returns the factorial of a given number.
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
