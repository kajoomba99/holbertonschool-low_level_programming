#include "holberton.h"
/**
 * flip_bits - flip_bits
 * @n: n
 * @m: m
 * Return: return
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, z;

	for (z = n ^ m; z != 0; z = z >> 1)
		count += z & 1;

	return (count);
}
