/*
 * File: 4-print_alphabt.c
 * Auth: Romero Arango vicotr
 */

#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
