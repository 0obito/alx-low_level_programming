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
int i;
int tab[n];

for (i = 1; i <= n; i++)
{
tab[i] = *s;
s++;
}

for (i = 1; i <= n; i++)
{
if (i != n)
printf("%d, ", tab[i]);
else
printf("%d", tab[i]);
}

printf("\n");
}
