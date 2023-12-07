#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that
 * inserts a new node at a given position.
 *
 * @h: the header of a list.
 * @idx: the node index.
 * @n: the node data.
 *
 * Return: The address of the new node, or NULL if it failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i = 0;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	temp = *h;
	while (temp != NULL)
	{
		if (i == idx)
		{
			new_node->next = temp;
			new_node->prev = temp->prev;

			(temp->prev)->next = new_node;
			temp->prev = new_node;

			return (new_node);
		}

		i++;
		temp = temp->next;
	}

	if (i == idx)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	return (NULL);
}
