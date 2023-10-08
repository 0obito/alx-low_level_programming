#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - entry point
 *
 * @ptr: a pointer to the memory previously allocated.
 * @old_size: the size of ptr.
 * @new_size: a new size for the new pointer.
 *
 * Description: reallocates a memory block using
 * malloc and free.
 *
 * Return: a pointer to a newly
 * allocated space in the memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	void *arr;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	arr = malloc(new_size);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			((char *)arr)[i] = ((char *)ptr)[i];
		return (arr);
	}
	else
	{
		for (i = 0; i < new_size; i++)
			((char *)arr)[i] = ((char *)ptr)[i];
		return (arr);
	}
}
