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
	if (*s == '\0')
		return (void);

	_putchar(s);
	s++;
	_puts_recursion(s);
}
