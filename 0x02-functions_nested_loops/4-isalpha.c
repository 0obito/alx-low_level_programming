# include "main.h"
# include <unistd.h>

/**
 * _isalpha - Entry point
 *
 * Description: Checks for alphabetic character
 *
 * @c: The character of check
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
