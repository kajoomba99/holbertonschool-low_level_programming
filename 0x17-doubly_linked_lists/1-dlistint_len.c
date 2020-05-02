#include "lists.h"
/**
 * dlistint_len - dlistint_len
 * @h: h
 * Return: counter
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t counter = 0;

	if (temp == NULL)
		return (0);

	while (temp)
	{
		temp = temp->next;
		counter += 1;
	}

	return (counter);
}
