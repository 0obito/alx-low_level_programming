#include "main.h"

/**
 * _strchr - Entry point
 *
 * @s: pointer to the string
 * @c: the searched character
 *
 * Description: Locates a character in a string.
 *
 * Return: A pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (p);
}
