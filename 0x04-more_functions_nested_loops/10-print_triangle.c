#include <unistd.h>
#include "main.h"

/**
 * print_triangle - Entry point
 *
 * Description: draws a triangle
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; i++)
	{
		j = size;
		while (j > i)
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k < i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
