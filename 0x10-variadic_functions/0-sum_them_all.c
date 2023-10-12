#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums indefinite integers.
 * @n: count of arguments
 *
 * Return: Sum of all arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, temp, s = 0;

	if (n == 0)
		return (0);

	va_list args;
	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		temp = va_arg(args, int);
		s = s + temp;
	}
	va_end(args);

	return (s);
}
