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

	if (nuevo == NULL)
		return (NULL);
	nuevo->name = malloc(sizeof(name));
	if (nuevo->name == NULL)
		return (NULL);
	nuevo->owner = malloc(sizeof(owner));
	if (nuevo->owner == NULL)
		return (NULL);

	nuevo->name = strdup(name);
	nuevo->owner = strdup(owner);
	nuevo->age = age;

	return (nuevo);
}

