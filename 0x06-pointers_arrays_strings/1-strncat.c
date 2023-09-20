#include "main.h"

/**
 * _strncat - entry point
 *
 * @dest: destination string
 * @src: source string
 * @n: limit of characters to be concatenated
 *
 * Description: concatenates the source string
 * into the destination string, but only for
 * n characters.
 *
 * Return: A pointer to the destination string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
char *beg_dest = dest;
int i = 1;

if (*dest != '\0')
{
do {
dest++;
} while (*dest != '\0');
}

while (i <= n && *src != '\0')
{
*dest = *src;
dest++;
src++;
i++;
}

*dest = '\0';
return (beg_dest);
}
