#include <unistd.h>
#include "main.h"

/**
 * _puts - Entry point
 *
 * Description: prints a string followed by a new line
 *
 * @str: the string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
