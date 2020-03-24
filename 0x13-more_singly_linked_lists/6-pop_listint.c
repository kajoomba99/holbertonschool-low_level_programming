#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: head
 * Return: return
 */
int pop_listint(listint_t **head)
{
	listint_t *del = *head;
	int deleted = (*head)->n;

	if (*head == NULL || head == NULL)
		return (0);

	*head = del->next;
	free(del);
	return (deleted);
}
