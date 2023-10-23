#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - removes the head node
 *
 * @head: head pointer
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *del;
	int data;

	if (*head == NULL)
		return (0);

	del = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(del);

	return (data);
}
