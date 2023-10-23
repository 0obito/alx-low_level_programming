#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - counts the number of
 * elements in a linked list
 *
 * @h: list head
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
