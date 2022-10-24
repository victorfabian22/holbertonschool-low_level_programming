#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: print number of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", (argc - 1));
	(void) argv;
	return (0);
}
