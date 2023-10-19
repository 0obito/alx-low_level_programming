#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - calculates the number of elements in a list.
 *
 * @h: pointer to the head node.
 *
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	do {

	count++;
	h = h->next;

	} while (h != NULL);

	return (count);
}
