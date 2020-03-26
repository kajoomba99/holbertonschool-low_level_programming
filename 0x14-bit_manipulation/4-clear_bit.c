#include "holberton.h"
/**
 * clear_bit - clear_bit
 * @n: n
 * @index: index
 * Return: return
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int ref, refn;

	if (index > 63)
		return (-1);

	refn = *n;

	ref = 1 << index;
	refn -= ref;

	if (refn < 0)
		*n = 0;
	else
		*n = refn;

	return (1);
}
