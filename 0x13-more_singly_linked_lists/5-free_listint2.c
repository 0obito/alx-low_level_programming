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
	listint_t *current = *head;
	listint_t *tempo;

	while (current != NULL)
	{
		tempo = current;
		current = current->next;

		free(tempo);
	}
	head = NULL;
}
