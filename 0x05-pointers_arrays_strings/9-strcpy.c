#include "main.h"

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
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_init = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (dest_init);
}
