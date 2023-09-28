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
	if (l == '\0')
		return (1);

	_putchar(s);
	s++;
	_puts_recursion(s);
	return (0);
}
