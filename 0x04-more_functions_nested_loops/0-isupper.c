#include <unistd.h>
#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: checks for uppercase character
 *
 * @c: checking character
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
