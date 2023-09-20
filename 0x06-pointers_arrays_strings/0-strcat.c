#include "main.h"

/**
 * _strcat - entry point
 *
 * @dest: destination string
 * @src: source string
 *
 * Description: concatenates the source string into
 * the destination string.
 *
 * Return: A pointer to the destination string 'dest'.
 */
char *_strcat(char *dest, char *src)
{
char *beg_dest = dest;

if (*dest != '\0')
{
do {
dest++;
} while (*dest != '\0');
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (beg_dest);
}
