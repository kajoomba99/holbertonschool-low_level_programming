#include "lists.h"
/**
 * print_listint - print_listint
 * @h: h
 * Return: return
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return ('\0');

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
