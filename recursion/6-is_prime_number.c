#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number to be checked
 *
 * Description: returns 1 if the input integer is a
 * prime number, otherwise return 0.
 * Return: 1 if n prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (is_prime(2, n));
	}
}

/**
 * is_prime - check  divisibility
 * @count: counter
 * @n: check if prime
 *
 * Description: Check if prime
 * Return: the int that is divisible
 */

int is_prime(int count, int n)
{
	if (count == n)
	{
		return (1);
	}
	else if (n % count == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime(count + 1, n));
	}
}
