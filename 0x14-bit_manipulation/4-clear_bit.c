#include "holberton.h"
/**
 * clear_bit - clear_bit
 * @n: n
 * @index: index
 * Return: return
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int ref;

	if (index > 63)
		return (-1);

	ref = 1 << index;

	*n = *n & (~ref);

	return (1);
}
