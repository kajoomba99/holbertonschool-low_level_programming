#include "lists.h"
/**
 * sum_listint - sum_listint
 * @head: head
 * Return: return
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
