#include "main.h"

/**
 * _strcmp - entry point
 *
 * @a: points to the array
 * @n: number of elements in the array
 *
 * Description: reverses the content
 * of an array of integers.
 */
void reverse_array(int *a, int n)
{
  for (i = 0; i < n; i++)
    {
      tab[i] = *a;
      a++;
    }
  a--;
  j = i - 1;
  for (i = j; i >= 0; i--)
    {
      *a = tab[i];
      a--;
    }
}
