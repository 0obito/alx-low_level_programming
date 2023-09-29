#include "main.h"

/**
 * _strlen_recursion - Entry point.
 *
 * Description: a function that returns the length of a string.
 *
 * @s: Points to a string.
 *
 * Return: The string's length.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (1 * factorial(n - 1));
}
