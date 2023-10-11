#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog profile.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 *
 * Return: a pointer to the dog's profile.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nuevo = malloc(sizeof(*nuevo));

	nuevo->name = malloc(sizeof(name));
	nuevo->owner = malloc(sizeof(owner));

	if (nuevo == NULL || nuevo->name == NULL || nuevo->owner == NULL)
		return (NULL);

	nuevo->name = strdup(name);
	nuevo->owner = strdup(owner);
	nuevo->age = age;

	return (nuevo);
}

