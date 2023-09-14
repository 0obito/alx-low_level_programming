#include <unistd.h>
#include "main.h"

/**
 * mul - Entry point
 *
 * Description: multiplies two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: the multiplication
 */
int mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}
