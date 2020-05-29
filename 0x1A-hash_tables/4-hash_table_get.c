#include "hash_tables.h"
/**
 * hash_table_get - hash_table_get
 * @ht: ht
 * @key: key
 * Return: return
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry = NULL;
	unsigned int index = 0;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	entry = ht->array[index];

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
