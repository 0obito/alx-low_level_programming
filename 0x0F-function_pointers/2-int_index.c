#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: size of array.
 * @cmp: pointer to the funciton we gonna use.
 * Return: index.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
