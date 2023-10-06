#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - entry point.
 *
 * Description: allocates memory using malloc.
 *
 * @b: size for allocation.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
	free(p);
	exit(98);
	}	

	return (p);
}

