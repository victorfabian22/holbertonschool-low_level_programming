#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char *s))(int, int);

/**
 * main - print result of calculations according to arguments
 *
 * @argc: argument count
 * @argv: arguments
 * Return: 0 if success exit if not, print results
 */
int main(int argc, char *argv[])
{
	int i, j;
	char k;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);
	k = *argv[2];

	if (argv[2][1] != '\0' || *get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((k == '/' || k == '%') && j == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(i, j));

	return (0);
}
