#include "main.h"
#define ROTATION_AMOUNT 25

/**
 * rot13 - entry point
 *
 * @s: string
 *
 * Description: Encodes a string into rot13 system.
 *
 * Return: The rot13 coded string 'rot'.
 */
char *rot13(char *s)
{
int i = 0;
char *rot13 = s;

while (*s != '\0')
{

while (i < 13 && ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z')))
{
if (*s == 'z' || *s == 'Z')
{
*s = *s - ROTATION_AMOUNT;
i++;
continue;
}
*s = *s + 1;
i++;
}

s++;
}

return (rot13);
}
