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
	int ret;
	char *buffer, *cle;
	hash_node_t *node = NULL, *temp = NULL;

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

	ret = node_allocate(&node, buffer, cle);
	if (ret == 0)
		return (0);
	ret = add_node(ht, index, node);
	if (ret == 0)
		return (0);
	return (1);
}

/**
 * add_node - adds a node to a structure.
 *
 * @ht: hash table.
 * @index: the index.
 * @node: the node.
 *
 * Return: 1 in sucess, 0 otherwise.
 */
int add_node(hash_table_t *ht, unsigned long int index, hash_node_t *node)
{
	hash_node_t *temp = NULL;

	if (node == NULL)
	{
		free(node->value);
		free(node->key);
		return (0);
	}

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

/**
 * node_allocate - allocates
 * memory for a node and fills it.
 *
 * @node: the node.
 * @buffer: a duplicate of value.
 * @cle: a duplicate of key.
 *
 * Return: 1 in success, 0 otherwise.
 */
int node_allocate(hash_node_t **node, char *buffer, char *cle)
{
	*node = malloc(sizeof(hash_node_t));
	if (*node == NULL)
	{
		free(buffer);
		free(cle);
		return (0);
	}

	(*node)->key = cle;
	(*node)->value = buffer;
	(*node)->next = NULL;

	return (1);
}
