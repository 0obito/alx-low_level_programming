#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - entry point.
 *
 * Description: creates an array of chars, and initializes it with a specific char.
 *
 * @size: the given size.
 *
 * @c: the given character.
 *
 * Return: a pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);

	if (ptr == NULL)
		return (1);

	for (i = 0; i < size; i++)
	{
	ptr[i] = c;
	}

	return (ptr);
}
