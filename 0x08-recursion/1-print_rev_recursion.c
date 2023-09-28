#include "main.h"

/**
 * _prin_rev_recursion - Entry point.
 *
 * Description: a function that prints a string in reverse.
 *
 * @s: Points to a string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);

	if (*s != '\n')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
}
