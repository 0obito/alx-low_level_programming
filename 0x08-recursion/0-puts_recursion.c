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
		_puts_recursion(s + 1);
	
	_putchar('\n');
}
