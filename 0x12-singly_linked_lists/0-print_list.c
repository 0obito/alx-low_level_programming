#include <stdio.h>
#include <string.h>
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
	list_t *hDup;

	if (h == NULL)
		return (-1);

	hDup = malloc(sizeof(list_t));

	hDup->str = h->str;
	hDup->len = h->len;
	hDup->next = h->next;

	do {

	if (hDup->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", hDup->len, hDup->str);

	count++;
	hDup = hDup->next;

	} while (hDup != NULL);

	free(hDup);

	return (count);
}
