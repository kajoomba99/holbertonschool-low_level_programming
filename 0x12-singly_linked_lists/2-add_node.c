#include "lists.h"
/**
 * add_node - add_node
 * @head: head
 * @str: str
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	while (str[len] != '\0')
		len++;

	new->len = len;

	new->next = *head;

	*head = new;

	return (new);
}
