#include "hash_tables.h"
/**
 * hash_table_set - hash_table_set
 * @ht: hash table
 * @key: is the jey
 * @value: is the value
 * Return: 1 on success 0 on fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *entry = NULL;
	hash_node_t *new = NULL;
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	entry = ht->array[index];

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = strdup(value);
			if (entry->value == NULL)
				return (0);
			return (1);
		}
		entry = entry->next;
	}
	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL  || new->value == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
