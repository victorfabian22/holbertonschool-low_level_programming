#include "dog.h"
#include <stdlib.h>


/**
 * free_dog - frees a dog object
 * @d: dog to be freed
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
