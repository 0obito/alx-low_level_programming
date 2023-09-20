#include "main.h"

/**
 * string_toupper - entry point
 *
 * @s: the string
 *
 * Description: changes the lowercase
 * characters to UPPERCASE characters.
 *
 * Return: A pointer to the string in UPPERCASE.
 */
char *string_toupper(char *s)
{
char *z = s;

while (*s != '\0')
{
if (*s >= 'a' && *s <= 'z')
{
*s = *s - 32;
}
s++;
}

return (z);
}
