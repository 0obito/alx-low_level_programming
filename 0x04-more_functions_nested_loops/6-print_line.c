#include <unistd.h>
#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: draws a straight line
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
