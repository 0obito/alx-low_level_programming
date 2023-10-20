#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *
 * @head: memory adresse of the head.
 * @str: the name sting.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new;

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
	new->next = *head;

	*head = new;
	return (new);
}
