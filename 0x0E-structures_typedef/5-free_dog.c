#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of struct dog.
 *
 * @d: inputs variable.
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
