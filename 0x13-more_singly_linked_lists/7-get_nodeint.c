#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - searches for a node
 *
 * @head: head pointer
 * @index: node's index
 *
 * Return: the searched node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tempo;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	tempo = head;
	i = 0;
	while (tempo != NULL)
	{
		if (index == i)
			return (tempo);

		i++;
		tempo = tempo->next;
	}

	return (NULL);
}
