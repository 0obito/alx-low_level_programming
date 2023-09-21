#include "main.h"
#include <unistd.h>

/**
 * print_number - entry point
 *
 * Description: a normal integer printer, I guess.
 */
void print_number(int n)
{
int i = n;
if (sizeof n == 4)
_putchar('0' + i);
}
