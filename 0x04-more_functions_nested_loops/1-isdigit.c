#include <unistd.h>
#include "main.h"

/**
 * _isdigit - Entry point
 *
 * Description: checks for a digit
 *
 * @c: checking character
 *
 * Return: 1 if a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
