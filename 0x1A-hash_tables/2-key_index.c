#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 *
 * @size: size of the array.
 * @key: the key.
 *
 * Return: the index at which the key/value
 * pair should be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;
	unsigned long int index;

	i = hash_djb2(key);
	index = i % size;

	return (index);
}
