#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - sets the value
 * of a bit at a given index to 0
 *
 * @n: the number in decimal
 * @index: the index to search for
 *
 * Return: 1 if succeded, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = sizeof(n) * 8 - 1;
	unsigned long int mask = 0;
	unsigned long int i;

	if (index > bit)
		return (-1);

	for (i = 0; i < index; i++)
	{
		mask << 1;
		mask += 1;

	}
	*n = *n | mask;

	return (1);
}
