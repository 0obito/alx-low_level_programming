#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_array - Entry point
 *
 * Decription: prints n elements of an array of integers
 *
 * @a: an array
 *
 * @n: number of elements in the array
 */
void print_array(int *a, int n)
{
int i = 1;
int j;
int tab[500];

while (*a != '\0')
{
tab[i] = *a;
i++;
a++;
}
a--;
j = i - 1;
i = 0;

while (i <= n)
{
if (i != n)
printf("%d, ", tab[i]);
else
printf("%d", tab[i]);

i++;
}

printf("\n");
}
