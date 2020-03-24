#include "lists.h"
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head: head
 * @idx: idx
 * @n: n
 * Return: return
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *temp, *p, *new;

	temp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (NULL);

	p = temp->next;

	temp->next = new;

	new->next = p;

	return (new);
}
