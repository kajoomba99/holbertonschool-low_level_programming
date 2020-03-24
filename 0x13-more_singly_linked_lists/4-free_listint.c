#include "lists.h"
/**
 * free_listint - free_listint
 * @head: head
 */
void free_listint(listint_t *head)
{
	listint_t *store;

	while (head != NULL)
	{
		store = head->next;
		free(head);
		head = store;
	}
}
