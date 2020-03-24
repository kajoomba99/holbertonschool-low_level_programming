#include "lists.h"
/**
 * get_nodeint_at_index - get_nodeint_at_index
 * @head: head
 * @index: index
 * Return: return
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *n_node;

	n_node = head;

	while (n_node != NULL && i < index)
	{
		n_node = n_node->next;
		i++;
	}

	if (n_node == NULL)
		return (NULL);

	return (n_node);

}
