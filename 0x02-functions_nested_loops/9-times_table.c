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
int mul=a*b;
for (a = 0; a <= 9; a++)
{
	for (b = 0; b <= 9; b++)
	{
	_putchar('0' + mul);
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
