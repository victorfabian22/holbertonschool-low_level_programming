#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * free_dog - Entry point
 * @d: dog structure
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
