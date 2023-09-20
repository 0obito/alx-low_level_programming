#include "main.h"

/**
 * _strcmp - entry point
 *
 * @s1: string number one
 * @s2: string number two
 *
 * Description: Compares the strings by comparing
 * each character starting from the first, and stops
 * when it finds a dismatch.
 *
 * Return: The difference between the two
 * dismatched characters.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
