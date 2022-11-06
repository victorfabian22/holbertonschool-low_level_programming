#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns sum of a and b
 *
 * @a: first parameter
 * @b: second parameter
 * Return: sum of parameters
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns difference between a and b
 *
 * @a: first parameter
 * @b: second parameter
 * Return: difference of parameters
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns product of a and b
 *
 * @a: first parameter
 * @b: second parameter
 * Return: product of parameters
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of a by b
 *
 * @a: first paramter
 * @b: second parameter
 * Return: division of parameters
 */
int op_div(int a, int b)
{
	if (b == 0)
		return (0);
	return (a / b);
}

/**
 * op_mod - returns remainder of a by b
 *
 * @a: first parameter
 * @b: second parameter
 * Return: remainder of parameters
 */
int op_mod(int a, int b)
{
	if (b == 0)
		return (0);
	return (a % b);
}
