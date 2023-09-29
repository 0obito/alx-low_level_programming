#include "main.h"

/**
 * _strlen_recursion - Entry point.
 *
 * Description: a function that returns the length of a string.
 *
 * @s: Points to a string.
 *
 * Return: The string's length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + (_strlen_recursion(s + 1)));
}
