#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: the array to look through
 * @size: the array's size
 * @value: the value to look for
 *
 * Return: the index where value is located
*/
int binary_search(int *array, size_t size, int value)
{
	int i, min, max, mid;

	if (array == NULL)
		return (-1);

	min = 0;
	max = size - 1;

	while (min <= max)
	{
		printf("Searching in array: ");
		for (i = min; i < max; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (max + min) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			max = mid - 1;
		else
			min = mid + 1;
	}
	return (-1);
}
