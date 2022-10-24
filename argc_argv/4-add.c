#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if success and 1 if error.
 */

int main(int argc, char *argv[])
{
	int a, b, c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b]; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		c = c + atoi(argv[a]);
	}

	printf("%d\n", c);

	return (0);
}
