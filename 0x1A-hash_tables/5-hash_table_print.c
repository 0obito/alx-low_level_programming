#include "hash_tables.h"

/**
 * hash_table_print - a function that
 * prints a hash table.
 *
 * @ht: the hash table we want to update.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	int printed = 0;

	if (ht == NULL)
		return;

	printf("{");
	index = 0;
	while (index < ht->size)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (printed)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);
			printed = 1;
			temp = temp->next;
		}
		index++;
	}
	printf("}\n");
}
