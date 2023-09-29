#include "main.h"

/**
 * _sqrt - Entry point.
 *
 * Description: A function that helps check
 * for the natural root square condition.
 *
 * @l: The base number.
 * @m: Helpful parameter.
 *
 * Return: I myself am not so sure so far.
 */
int _sqrt(int l, int m)
{
	if (m <= 0)
		return (-1);
	if (m * m == l)
		return (m);
	return (_sqrt(l, m - 1));
}
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
	if (n <= 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
	{
		return (_sqrt(n, n - 1));
	}
}
