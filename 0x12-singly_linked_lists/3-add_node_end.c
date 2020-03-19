#include "lists.h"
/**
 * add_node_end - add_node_end
 * @head: head
 * @str: str
 * Return: return
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;

	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	new->str = strdup(str);

	while (str[len] != '\0')
		len++;

	new->len = len;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;

	return (new);
}
