#include <unistd.h>
#include "main.h"

/**
 * print_rev - Entry point
 *
 * Description: prints a string in reverse
 *
 * @s: the string
 */
void print_rev(char *s)
{
char tab[300];
int i = 0;

while (*s != '\0')
{
tab[i] = *s;
i++;
s++;
}
i--;
while (i >= 0)
{
_putchar(tab[i]);
i--;
}
_putchar('\n');
}
