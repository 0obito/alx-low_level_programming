#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
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
	int s_len = 10;
	char *null_s = "[0] (nil)\n";

	if (h == NULL)
		return (-1);
	do {

	if (h->str == NULL)
	  printf();
	else
	{
		write(1, "[", 1);
		print_number(h->len);
		write(1, "] ", 3);
		write(1, h->str, h->len);
		write(1, "\n", 1);
	}

	count++;
	h = h->next;

	} while (h != NULL);

	return (count);
}
