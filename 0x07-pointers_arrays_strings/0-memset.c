#include "main.h"

/**
 * _memset - Entry point
 *
 * @s: the pointer
 * @b: the constant byte
 * @n: number of bytes pointed to
 *
 * Description:  Fills the memory with a constant byte.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

for (; n > 0; n--)
{
	*s = b;
	s++;
}
return (p);
}
