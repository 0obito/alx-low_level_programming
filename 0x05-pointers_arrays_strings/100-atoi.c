#include "main.h"

/**
 * _atoi - Entry point
 *
 * Decription: converts the string pointed
 * to, to a number
 *
 * @s: a string
 *
 * Return: the number, else 0
 */
int _atoi(char *s)
{
char *num;
char *num_init = num;
char *sign = '+';
char integer;
int i = 0;

while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
{
*num = *s;
i++;
}
else if (*s == '-')
{
if (sign == '+')
sign = '-';
else if (sign == '-')
sign = '+';
else
continue;
}
s++;
num++;
}
s--;
num--;

if (*num != *s)
return (0);
else
{
num++;
*num = '\0';

integer = *sign;
integer++;
while (i >= 0)
{
integer =*num;
integer++;
num++;
i--;
}
}
return (integer);
}
}
