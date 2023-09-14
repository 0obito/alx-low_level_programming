#include <unistd.h>
#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: prints numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
		j = 0;
		_putchar('\n');
	}
	_putchar('\n');
}
