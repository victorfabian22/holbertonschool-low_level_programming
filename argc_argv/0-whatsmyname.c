#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints its name, followed by a new line.
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void)argc;
	return (0);
}
