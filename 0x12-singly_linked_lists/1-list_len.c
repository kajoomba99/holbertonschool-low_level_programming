#include "lists.h"
/**
 * list_len - list_len
 * @h: h
 * Return: return
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
