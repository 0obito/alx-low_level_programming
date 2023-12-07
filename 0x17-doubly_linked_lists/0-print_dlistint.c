#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints
 * all the elements of a dlistint_t list.
 *
 * @h: the header of a list.
 *
 * Return: The number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	printf("%d\n", h->n);
	i++;

	return (i);
}
