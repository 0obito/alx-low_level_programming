#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - entry point.
 *
 * Description: void *malloc_checked(unsigned int b).
 *
 * @b: size for allocation.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	int *p;
	p = malloc(b);
	if (p == NULL)
		return (98);

	return (p);
}
