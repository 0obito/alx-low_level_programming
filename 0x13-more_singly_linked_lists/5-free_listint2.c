#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: list head
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (*head == NULL)
		exit(98);

	while (*head != NULL)
	{
		tempo = *head;
		*head = (*head)->next;

		free(tempo);
	}
	*head = NULL;
	head = NULL;
}
