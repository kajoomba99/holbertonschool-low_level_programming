#include "lists.h"
/**
 * pop_listint - pop_listint
 * @head: head
 * Return: return
 */
int pop_listint(listint_t **head)
{
	listint_t *del;

	int n;

	if (*head == NULL || head == NULL)
		return (0);

	n = (*head)->n;

	del = (*head)->next;

	free(*head);

	*head = del;

	return (n);
}
