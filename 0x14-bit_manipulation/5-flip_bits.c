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
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int count = 0;

	while (xor != 0)
	{
		if (xor & 1)
			count ++;
		xor >>= 1;
	}

	return (count);
}
