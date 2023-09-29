#include "main.h"

/**
 * factorial - Entry point.
 *
 * Description: a function that returns the factorial of a number.
 *
 * @n: The number.
 *
 * Return: The number's factorial.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	if (n > 0)
		return (n * factorial(n - 1));
}
