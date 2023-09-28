#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: Pointer to the string to be analyzed
 * @accept: Pointer to the string containing the set of bytes
 *
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0' && *ptr != *s)
		{
			ptr++;
		}

		if (*ptr == '\0')
		{
			break;
		}

		count++;
		s++;
	}
	return (count);
}
