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
	char *ptr;
	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	*ptr = '0' + c;
	return (ptr);
}
