#include <unistd.h>
#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: computes absolute value of an integer
 *
 * @n: the number
 *
 * Return: absolute value
 */
int _abs(int n)
{
if (n < 0)
	return (-n);
else
	return (n);
}
