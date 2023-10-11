#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executs a function.
 * @array: pointer to an array.
 * @size: size of array.
 * @action: pointer to a function to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	i = 0;
	if (action != NULL && array != NULL)
	{

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
