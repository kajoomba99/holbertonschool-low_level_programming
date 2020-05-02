#include "lists.h"
/**
 * add_dnodeint - add_dnodeint
 * @head: head
 * @n: n
 * Return: new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (temp == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp->prev = new_node;
	new_node->next = temp;
	*head = new_node;
	return (new_node);
}
