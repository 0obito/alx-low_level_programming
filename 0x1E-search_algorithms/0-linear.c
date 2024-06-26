#include "search_algos.h"

/**
 * linear_search - a function that searches
 * for a value in an array of integers using
 * the Linear search algorithm
 *
 * @array: the array to search through
 * @size: array's size
 * @value: the value to search for
 *
 * Return: the first index where value is located,
 * else returns -1
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
