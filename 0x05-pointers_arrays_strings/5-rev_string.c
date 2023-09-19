#include <unistd.h>
#include "main.h"

/**
 * rev_string - Entry point
 *
 * Description: reverses a string
 *
 * @s: the string
 */
void rev_string(char *s)
{
char tab[1000];
int i = 0;

while (*s != '\0')
{
tab[i] = *s;
i++;
s++;
}
s--;
int j = i - 1;

for (i = 0; i <= j; i++)
{
*s = tab[i];
s--;
}
}
