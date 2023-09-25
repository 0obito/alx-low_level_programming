#include "main.h"

/**
 * - Entry point
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
int i = 0;

for (; n > 0; n--)
{
	*s = b;
	s++;
	i++;
	
	if (i = 8)
		break;
}
return (p);
}
