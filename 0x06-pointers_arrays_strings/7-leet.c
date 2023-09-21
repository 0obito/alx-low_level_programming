#include "main.h"

/**
 * leet - entry point
 *
 * @s: string
 *
 * Description: Encodes a string into leet system.
 *
 * Return: The leet coded string 'aelot'.
 */
char *leet(char *s)
{
int i;
char *aelot = s;
char t[5] = "43107";
char t1[5] = "AELOT";
char t2[5] = "aelot";

while (*s != '\0')
{

for (i = 0; i < 5; i++)
{
if (*s == t1[i] || *s == t2[i])
{
*s = t[i];
}
}

s++;
}

return (aelot);
}
