#include "main.h"

/**
 * cap_string - entry point
 *
 * @s: the string
 *
 * Description: Capitalizes all words of a string.
 *
 * Return: A pointer to the Capitalized string.
 */
char *cap_string(char *s)
{
char *z = s;

if (*s >= 'a' && *s <= 'z')
{
*s = *s - 32;
s++;
}

while (*s != '\0')
{
if (*s == ' ' || *s == '\t' || *s == '\n' || *s == ',' || *s == ';' || *s == '.' || *s == '!' || *s == '?' || *s == '"' || *s == '(' || *s == ')' || *s == '{' || *s == '}')
{
s++;
if (*s >= 'a' && *s <= 'z')
{
*s = *s - 32;
s++;
}
}

else
{
s++;
}

}
return (z);
}
