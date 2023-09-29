#include "main.h"

/**
 * _pow_recursion - Entry point.
 *
 * Description: a function that returns the value of x raised to the power of y.
 *
 * @x: The base number.
 * @y: The power number.
 * 
 * Return: The value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (0);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}