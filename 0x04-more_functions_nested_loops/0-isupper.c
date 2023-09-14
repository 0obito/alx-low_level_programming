#include <unistd.h>
11;rgb:0000/0000/0000#include "main.h"

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
