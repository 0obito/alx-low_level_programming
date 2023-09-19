#include <unistd.h>
#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: prints every other character of the string
 *
 * @str: the string
 */
void puts2(char *str)
{
char tab[1000];
int i = 0;
int j;

while (*str != '\0')
{
tab[i] = *str;
i++;
str++;
}
j = i - 1;
for (i = 0; i <= j; i++)
{
if (i % 2 == 0)
_putchar(tab[i]);
}
_putchar('\n');
}
