#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 *
 * @value: the value associated with the key.
 * @key: the key.
 * @ht: the hash table we want to update.
 *
 * Return: 1 in success, 0 in failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	char *buffer, *cle;
	hash_node_t *node, *temp = NULL;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);

	buffer = strdup(value);
	if (buffer == NULL)
		return (0);
	cle = strdup(key);
	if (cle == NULL)
	{
		free(buffer);
		return (0);
	}

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(buffer);
		free(cle);
		return (0);
	}

	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
		{
			free(temp->value);
			temp->value = buffer;
			free(cle);
			return (1);
		}
		temp = temp->next;
	}

	node->key = cle;
	node->value = buffer;
	node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		temp = ht->array[index];
		node->next = temp;
		ht->array[index] = node;
	}

	return (1);
}
