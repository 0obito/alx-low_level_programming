#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - the code
 *
 * @d: data structure of a dog.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		struct dog *dog_ptr = malloc(sizeof(struct dog));

		if (dog_ptr == NULL)
			exit(EXIT_FAILURE);

		dog_ptr->name = (d->name != NULL) ? d->name : NULL;
		dog_ptr->age = d->age;
		dog_ptr->owner = (d->owner != NULL) ? d->owner : NULL;

		if (dog_ptr->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", dog_ptr->name);

		printf("Age: %f\n", dog_ptr->age);

		if (dog_ptr->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", dog_ptr->owner);
	}
}
