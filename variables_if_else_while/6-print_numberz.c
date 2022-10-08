/*
 * File: 4-print_alphabt.c
 * Auth: Romero Arango Victor
 */

#include <stdio.h>

/**
 * main - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num %10) + 0');
	
	putchar('\n');

	return (0);
