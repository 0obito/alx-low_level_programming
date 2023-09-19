#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Entry point
 *
 * Decription: copies the string pointed
 * to, to the buffer pointed to
 *
 * @dest: a buffer
 *
 * @src: a string
 *
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 1;
int j;
int tab[1000];

while (*src != '\0')
{
tab[i] = *src;
i++;
src++;
}
tab[i] = *src;

j = i;
src--;
i = 1;

while (j >= 1)
{
*dest = tab[i];
i++;
dest++;
j--;
}

fin = *dest;
return (fin);
}
