#include <unistd.h>
#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: computes the length of a string
 *
 * @s: the string
 *
 * Return: returns the length of s
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
