#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all the elements
 * of a listint_t list
 *
 * @head: head pointer
 *
 * Return: sum of elements
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (count);

	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}

	return (count);
}
