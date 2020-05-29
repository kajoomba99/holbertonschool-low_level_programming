#include "hash_tables.h"
/**
 * hash_table_print - hash_table_print
 * @ht: ht
 * Return: return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head = NULL;
	char *coma = "";

	if (ht == NULL)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		head = ht->array[i];

		if (head != NULL)
		{
			while (head != NULL)
			{
				printf("%s", coma);
				printf("'%s': '%s'", head->key, head->value);
				coma = ", ";
				head = head->next;
			}
		}
	}
	printf("}\n");
}
