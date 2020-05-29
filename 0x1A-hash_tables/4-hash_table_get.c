#include "hash_tables.h"
/**
 * hash_table_get - hash_table_get
 * @ht: ht
 * @key: key
 * Return: return
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
		return (ht->array[index]->value);
	else
		return (NULL);
}
