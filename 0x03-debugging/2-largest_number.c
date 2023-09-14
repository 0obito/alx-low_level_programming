#include "main.h"

/**
 * largest_number - Entry point
 *
 * Description: computes the largest number of 3 integers
 *
 * @a: integer 1
 *
 * @b: integer 2
 *
 * @c: integer 3
 *
 * Return: always 0
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
