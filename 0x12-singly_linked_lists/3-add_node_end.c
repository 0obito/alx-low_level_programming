#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list.
 *
 * @head: memory adresse of the head.
 * @str: the name sting.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	list_t *new, *temp;

	if (str == NULL)
		return (NULL);

	dup = strdup(str);

	if (dup == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(dup);
		return (NULL);
	}

	new->str = dup;
	new->len = strlen(dup);
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
