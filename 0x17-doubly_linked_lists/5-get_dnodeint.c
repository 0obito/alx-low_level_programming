#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function that
 * returns the nth node of a dlistint_t linked list.
 *
 * @head: the header of a list.
 * @index: index of the node.
 *
 * Return: The node at the given index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *index_node = head;
	unsigned int i = 0;

	while (index_node != NULL)
	{
		if (i == index)
			return (index_node);

		index_node = index_node->next;
		i++;
	}

	return (NULL);
}
