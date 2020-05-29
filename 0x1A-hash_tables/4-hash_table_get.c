#include "hash_tables.h"
/**
 * hash_table_get - hash_table_get
 * @ht: ht
 * @key: key
 * Return: return
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int slot = key_index((unsigned char *)key, ht->size);

	hash_node_t *entry = ht->array[slot];

	if (entry == NULL)
	{
		return (NULL);
	}

	while (entry != NULL)
	{

		if (strcmp(entry->key, key) == 0)
		{
			return (entry->value);
		}


		entry = entry->next;
	}

	return (NULL);
}
