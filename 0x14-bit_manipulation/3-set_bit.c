#include "holberton.h"
/**
 * set_bit - set_bit
 * @n: n
 * @index: index
 * Return: return
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int ref;

	if (index > 63)
		return (-1);

	ref = 1 << index;
	*n += ref;
	return (1);
}
