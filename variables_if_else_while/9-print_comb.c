#include <stdio.h>

/**
 * main - print numbers
 *
 * Description: Print numbers from 0 to 9
 * separated with , and space followed by a new line
 * Return: Always return 0
 */

int main(void)
{

	int c;

	for (c = 48; c <= 57; c++)
	{
	putchar(c);
		if (c != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar ('\n');
	return (0);
}
