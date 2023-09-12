#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: prints last digit of a number
 *
 * @n: the number
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_d = n % 10;
	return (last_d);
}
