#include "lists.h"
/**
 * print_dlistint - print_dlistint
 * @h: h
 * Return: counter
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int counter = 0;

	if (temp == NULL)
		return (0);

	while (temp  != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter += 1;
	}

	return (counter);
}
