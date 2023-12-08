#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that
 * removes a node at a given position.
 *
 * @head: the header of a list.
 * @idx: the node index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->prev != NULL)
				(temp->prev)->next = temp->next;
			else
				*head = temp->next;
			if (temp->next != NULL)
				(temp->next)->prev = temp->prev;
			temp->prev = NULL;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		i++;
		temp = temp->next;
	}
	return (-1);
}
