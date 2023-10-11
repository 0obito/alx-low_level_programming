#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees everything
 *
 * @d: dog's profile.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
	exit(0);
}
