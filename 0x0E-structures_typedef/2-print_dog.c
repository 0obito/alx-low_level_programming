#include <stdio.h>
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
		if ((*d).name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", (*d).name);
		printf("\n");
		printf("Age: %f", (*d).age);
		printf("\n");
		if ((*d).owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", (*d).owner);
	}
}
