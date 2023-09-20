#include "main.h"

/**
 * _strncpy - entry point
 * description: copies a string into another with n limit of characters
 * @dest: destination string
 * @src: source string
 * @n: limit of characters to be copied
 * return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
char *beg_dest = dest;
int i = 1;

while (i <= n)
{
if (*src != '\0')
{
*dest = *src;
dest++;
src++;
i++;
}
else
{
while (i <= n)
{
*dest = '\0';
dest++;
i++;
}
}

return (beg_dest);
}
