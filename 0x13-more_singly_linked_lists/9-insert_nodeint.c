#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position
 *
 * @head: head pointer
 * @idx: index
 * @n: value
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *node, *current = *head, *temp;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		if (*head == NULL)
			*head = node;
		else
		{
			temp = *head;
			*head = node;
			node->next = temp;
		}
		return (node);
	}
	while (current != NULL)
	{
		if (count + 1 == idx)
		{
			temp = current;
			node->next = current->next;
			current->next = node;
			return (node);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
