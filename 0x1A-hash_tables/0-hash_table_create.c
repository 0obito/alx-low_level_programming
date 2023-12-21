#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 *
 * @size: size of the array.
 *
 * Return: a pointer to the newly created hash table, else NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	hash_node_t **nodeArray;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return(NULL);

	nodeArray = malloc(sizeof(hash_node_t *) * size);
	if (nodeArray == NULL)
	{
		free(hashTable);
		return (NULL);
	}

	hashTable->array = nodeArray;
	hashTable->size = size;

	return(hashTable);
}
