#include <stdio.h>

/**
 * print_to_98 - print n to 98
 * @n: number to be checked
 *
 * Description: add or subtract n to 98 and print
 * the resulted number followed by a , and space
 * Return: 0
 */

int print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	printf("%d\n", n);
	}
	return (0);

}
