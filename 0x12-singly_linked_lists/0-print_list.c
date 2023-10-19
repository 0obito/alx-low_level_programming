#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list.
 *
 * @h: pointer to the head node.
 *
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		free(h);
		return (-1);
	}

	do {

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	count++;
	h = h->next;

	} while (h != NULL);

	return (count);
}
