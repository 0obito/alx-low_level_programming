#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: draws a diagonal line
 *
 * @n: number of diagonals
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		j = 1;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
