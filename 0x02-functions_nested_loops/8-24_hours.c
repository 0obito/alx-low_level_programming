#include <unistd.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: prints every minute of the day
 */
void jack_bauer(void)
{
int hour;
int min;
for (hour = 0; hour <= 23; hour++)
{
	for (min = 0; min <= 59; min++)
	{
	_putchar('0' + (hour / 10));
	_putchar('0' + (hour % 10));
	_putchar(':');
	_putchar('0' + (min / 10));
	_putchar('0' + (min % 10));
	_putchar('\n');
	}
}
}
