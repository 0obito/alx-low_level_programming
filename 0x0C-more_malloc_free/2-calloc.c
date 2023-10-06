#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - entry point
 *
 * @nmemb: number of elements.
 * @size: size of array's elements.
 *
 * Description: allocates memory for an array
 * using malloc.
 *
 * Return: a pointer to an array
 * of nmemb elements of size bytes each.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
