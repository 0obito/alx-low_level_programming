#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at
 * the end of a listint_t list
 *
 * @head: list head
 * @n: the new node int
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuevo;
	listint_t *tempo = *head;

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = n;
	nuevo->next = NULL;

	if (*head == NULL)
	{
		*head = nuevo;
		return (nuevo);
	}

	while (tempo->next != NULL)
		tempo = tempo->next;

	tempo = nuevo;

	return (nuevo);
}
