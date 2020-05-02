#include "lists.h"
/**
 * get_dnodeint_at_index - get_dnodeint_at_index
 * @head: head
 * @index: index
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int position = 0;

	while (temp != NULL && position <= index)
	{
		if (position == index)
			break;

		temp = temp->next;
		position += 1;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}

