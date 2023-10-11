#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition operation.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: Operation result.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction operation.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: Operation result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operation.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: Operation result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operation.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: Operation result.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo operation.
 * @a: 1st integer.
 * @b: 2nd integer.
 * Return: Operation result.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
