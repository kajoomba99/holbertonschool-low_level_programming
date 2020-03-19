#include "lists.h"
/**
 * free_list - free_list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *p, *store;

	p = head;

	while (p != NULL)
	{
		store = p->next;
		free(p->str);
		free(p);
		p = store;
	}
}
