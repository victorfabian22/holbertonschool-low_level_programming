#include <stdio.h>
#include "main.h"

/**
 * main - print arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: print  arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", *(argv + a));
	}
	return (0);
