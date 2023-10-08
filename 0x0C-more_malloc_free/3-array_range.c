#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - entry point
 *
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Description: creates an array of integers.
 *
 * Return: the pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	while (max >= min)
	{
		arr[i] = min;
		min++;
		i++;
	}

	return (arr);
}
