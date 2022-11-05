#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function to free structures
 * Return: void
 * @d: structure
*/
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
