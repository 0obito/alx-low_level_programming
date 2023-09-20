#include "main.h"

/**
 * _strcat - entry point
 * description: concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
char *beg_dest = dest;

if (*dest != '\0')
{
do
{
dest++;
}
while (*dest != '\0');
}

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (beg_dest);
