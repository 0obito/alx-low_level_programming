# include "main.h"
# include <unistd.h>

/**
 * _islower - Entry point
 *
 * Description: Checks for lowercase character
 *
 * @c: The character of check
 *
 * Return: 1 (Success)
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
	return (1);
else
	return (0);
}
