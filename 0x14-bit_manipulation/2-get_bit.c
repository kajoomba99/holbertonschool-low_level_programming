#include "holberton.h"
/**
 * get_bit - get_bit
 * @n: n
 * @index: index
 * Return: return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n >>= index;
	return (n & 1);
}
