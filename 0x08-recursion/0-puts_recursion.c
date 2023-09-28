#include "main.h"

/**
 * _puts_recursion - Entry point.
 *
 * Description: a function that prints a string, followed by a new line.
 *
 * @s: Points to a string.
 */
void _puts_recursion(char *s)
{
	_putchar(*s);

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
