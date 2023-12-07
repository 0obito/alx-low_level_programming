#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum
 * of all the data (n) of a dlistint_t linked list
 *
 * @head: the header of a list.
 *
 * Return: The sum of all data in linked list.
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *container = head;
	int sum = 0;

	while (container != NULL)
	{
		sum += container->n;
		container = container->next;
	}
	return (sum);
}
