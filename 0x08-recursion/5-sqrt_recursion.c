#include "main.h"

/**
 * _sqrt_recursion - Entry point.
 *
 * Description: a function that returns
 * the natural square root of a number.
 *
 * @n: The base number.
 *
 * Return: The square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
	{
		if (n == n * n)
			return (n);
		else
			return (_sqrt_recursion(n - 1));
	}
}
