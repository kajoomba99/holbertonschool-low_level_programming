#include "holberton.h"
/**
 * clear_bit - clear_bit
 * @n: n
 * @index: index
 * Return: return
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
