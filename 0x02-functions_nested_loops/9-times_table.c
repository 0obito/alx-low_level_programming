#include <unistd.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: prints the 9 times table
 */
void times_table(void)
{
int a;
int b;
for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
        _putchar('0' + (a*b));
	if (b < 9)
	{
	_putchar(' ');
	_putchar(' ');
	_putchar(',');
	}
	}
	_putchar('\n');
}
}
