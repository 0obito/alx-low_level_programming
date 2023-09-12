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
int last_digit = n % 10;
last digit = _abs(last_digit);
_putchar('0' + last_digit);
return (last_digit);
}
