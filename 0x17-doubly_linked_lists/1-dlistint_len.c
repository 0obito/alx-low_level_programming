#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - a function that returns
 * the number of elements in a linked dlistint_t list.
 *
 * @h: the header of a list.
 *
 * Return: The number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	i++;

	return (i);
}
