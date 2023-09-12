#include <unistd.h>
#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: computes absolute value of an integer
 */
int _abs(int n)
{
if (n < 0)
	_putchar(-n);
else
	_putchar(n);
}
