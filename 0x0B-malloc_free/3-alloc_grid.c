#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2-dimensional array of integers.
 *
 * @width: width of the array.
 * @height: height of the array.
 *
 * Return: a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[j]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
