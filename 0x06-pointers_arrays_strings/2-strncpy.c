#include "main.h"

/**
 * _strncpy - entry point
 *
 * @dest: destination string
 * @src: source string
 * @n: limit of characters to be copied
 *
 * Description: Copies a string into another with a limit of 'n' characters.
 * If 'src' is shorter than 'n', the remaining characters in 'dest' are
 * filled with null bytes ('\0'). Returns a pointer to 'dest'.
 *
 * Return: A pointer to the destination string 'dest'.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *destart = dest;
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
}
return (destart);
}
