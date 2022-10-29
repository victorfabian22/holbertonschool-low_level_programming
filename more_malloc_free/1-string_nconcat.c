#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - Write a function that concatenates two strings.
 * @s1:              First string.
 * @s2:              Second string.
 * @n :              Number of characters to take from string number 2.
 * Return:           Pointer to a newly allocated spae in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *allocate;
	unsigned int totalLen, i;
	int count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	totalLen = n;

	for (i = 0; s1[i] != '\0'; i++)
		;
	totalLen += i;

	allocate = (char *)malloc(sizeof(char) * (totalLen + 1));

	if (allocate == NULL)
		return (NULL);

	count = 0;
	for (i = 0; *s1; i++, count++)
		*allocate++ = *s1++;

	for (i = 0; *s2 && i < n; i++, count++)
		*allocate++ = *s2++;

	*allocate = '\0';

	return (allocate - count);
}
