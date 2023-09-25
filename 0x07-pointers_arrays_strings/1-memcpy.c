#include "main.h"

/**
 * _memcpy - Entry point
 *
 * @dest: the destinated pointer
 * @src: the source pointer
 * @n: number of bytes to be copied
 *
 * Description: Copies memory area.
 *
 * Return: A pointer to the memory area s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *p = dest;

for (; n > 0; n--)
{
	*dest = *src;
	dest++;
	src++;
}
return (p);
}
