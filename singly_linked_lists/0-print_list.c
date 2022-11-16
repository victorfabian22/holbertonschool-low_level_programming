#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: Pointer to list-t
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i= 0;
	while (h !=0)
	{
		if (h->str == NULL)
		{
			printf(´"[0] (nill)\n");
		}
		else
		{
			printf("[%d] %s\n" , h->len, h->str);
		}
		h = h->next;
		i = i + 1;
	}
	return (i);
}
