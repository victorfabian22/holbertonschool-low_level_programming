#include "main.h"

/**
 * swap_int - swap the value of two int variable
 * @a: first int variable
 * @b: second int variable
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
