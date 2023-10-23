#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return(count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return(count);
}
