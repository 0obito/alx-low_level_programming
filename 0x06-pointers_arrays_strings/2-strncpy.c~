#include "main.h"

/**
 * _strncat - entry point
 * description: concatenates 2 strings with an n limit of characters
 * @dest: destination string
 * @src: source string
 * @n: limit of characters to be concatenated
 * return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *beg_dest = dest;
int i = 1;

if (*dest != '\0')
{
do
{
dest++;
}
while (*dest != '\0');
}

while (i <= n && *src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (beg_dest);
}
