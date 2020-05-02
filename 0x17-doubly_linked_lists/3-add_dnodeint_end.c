#include "lists.h"
/**
 * add_dnodeint_end - add_dnodeint_end
 * @head: head
 * @n: n
 * Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (temp->next == NULL)
		{
			new_node->prev = temp;
			temp->next = new_node;
			break;
		}
		temp = temp->next;
	}
	return (new_node);
}
