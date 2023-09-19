#include <unistd.h>
#include "main.h"

/**
 * puts2 - Entry point
 *
 * Description: prints every other character of the string
 *
 * @str: the string
 */
void puts_half(char *str)
{
char tab[1000];
int i = 1;
int j;
int num;
while (*str != '\0')
{
tab[i] = *str;
i++;
str++;
}
/* j is the last table case */
j = i - 1;
/* num = how man letters we gonna write */
num = j / 2;
while (num > 0)
{
_putchar(tab[i-num]);
num--;
}
_putchar('\n');
}
