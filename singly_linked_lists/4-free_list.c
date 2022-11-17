#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head:      Head of the list.
 * Return:     void.
 */
void free_list(list_t *head)
{
	if (!head)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
