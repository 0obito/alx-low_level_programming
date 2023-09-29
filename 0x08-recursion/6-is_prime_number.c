#include "main.h"

/**
 * is_prime - Entry point.
 *
 * Description: a function that helps
 * another fonction to check if a
 * given number is a prime or not.
 *
 * @n: The given number.
 * @m: helps in check.
 *
 * Return: 1 if it's a prime number, 0 otherwise.
 */
int is_prime(int n, int m)
{
	if (m == 1)
		return (1);
	if (n % m == 0)
		return (0);
	return (is_prime(n, m - 1));
}


/**
 * is_prime_number - Entry point.
 * 
 * Description: a function that checks
 * a given number if it is a prime number
 * or not.
 *
 * @n: The given number.
 *
 * Return: 1 if it's a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (is_prime(n, n - 1));
}
