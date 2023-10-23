#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node
 * at the beginning of a listint_t list
 *
 * @h: list head
 * @n: the new node int
 *
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuevo;

	nuevo = malloc(sizeof(listint_t));

	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	nuevo->next = *head;
	*head = nuevo;

	return (nuevo);
}
