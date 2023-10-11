#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * init_dog - entry point
 *
 * @d: pointer to the dog.
 * @name: pointer to its name.
 * @age: its age.
 * @owner: pointer to its age.
 *
 * Description: initializes a dog with
 * a name, an age and an owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
        if (d != NULL)
	{
        d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
	}
}
