#include <stdlib.h>
#include "dog.h"

/**
* free_dog - Frees dogs
* @d: Dog being freed
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->owner);
free(d->name);
free(d);
}
}
