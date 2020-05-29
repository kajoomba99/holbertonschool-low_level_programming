#include "hash_tables.h"
/**
 * hash_table_delete - hash_table_delete
 * @ht: ht
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head = NULL;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	for (; i < ht->size; i++)
	{
		head = ht->array[i];
		if (head != NULL)
		{
			while (head != NULL)
			{
				temp = head;
				head = head->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}

		}
	}
	free(ht->array);
	free(ht);
}
