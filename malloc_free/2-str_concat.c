#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: char
 * @s2: char
 * Return: a string
 */
char *str_concat(char *s1, char *s2)
{
	char *a = NULL;
	unsigned int i, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	a = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(s1) + 1; i++)
	{
		a[i] = s1[i];
	}
	for (x = 0; x <= strlen(s2) + 1; x++)
	{
		a[strlen(s1) + x] = s2[x];
	}
	return (a);
	free(a);
	a = NULL;
}
