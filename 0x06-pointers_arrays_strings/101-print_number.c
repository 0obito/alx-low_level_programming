#include "main.h"

/**
 * print_number - entry point
 *
 * @n: the big whole integer
 *
 * Description: a normal integer printer, I guess.
 */
void print_number(int n)
{
int temp;
int divisor = 1;
int numDigits = 0;
int digit;

if (n < 0)
{
_putchar('-');
n = -n;
}
if (n == 0)
{
_putchar('0');
return;
}

temp = n;
while (temp > 0)
{
temp /= 10;
divisor *= 10;
numDigits++;
}
while (divisor > 0)
{
digit = n / divisor;
_putchar('0' + digit);
n %= divisor;
divisor /= 10;
}
}
