#include "lists.h"
/**
 * delete_nodeint_at_index - delete_nodeint_at_index
 * @head: head
 * @index: index
 * Return: return
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *prev = *head;
	listint_t *sig = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (prev != NULL && i < (index - 1))
	{
		i++;
		prev = prev->next;
	}

	i = 0;

	while (sig != NULL && i < index)
	{
		i++;
		sig = sig->next;
	}

	if (prev == NULL || sig == NULL)
		return (-1);

	prev->next = sig->next;

	free(sig);

	return (1);
}
