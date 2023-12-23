#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 *
 * @ht: the hash table we want to update.
 * @key: the key.
 *
 * Return: the value associated with the element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, size;
	hash_node_t *temp;

	size = ht->size;
	index = key_index((const unsigned char *)key, size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
