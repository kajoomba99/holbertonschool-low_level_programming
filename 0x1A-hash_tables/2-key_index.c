#include "hash_tables.h"
/**
 * key_index - key_index
 * @key: is the key
 * @size: is the size
 * Return: unsigned ong int index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;
	unsigned long int index = 0;

	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
