/*
 * File: 1-last_digit.c
 * Auth: Romero Arango Victor
 */

#include <stdlib.h>

/**
 * main - Write a program that prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar(letter);

	putchar('\n');

	return (0);

}
