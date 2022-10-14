#include "main.h"

/**
 * _strlen - return the lenght of a string
 * @s: string
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int i = *s;
	int count = 0;

	while (i != 0)
	{
		i = *s++;
		count++;
	}
	if (count > 0)
		return (count - 1);
	else
		return (count)
}
