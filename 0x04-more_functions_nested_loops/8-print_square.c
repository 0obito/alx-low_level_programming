#include <unistd.h>
#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: prints a square
 *
 * @size: size of square
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
	}
}
