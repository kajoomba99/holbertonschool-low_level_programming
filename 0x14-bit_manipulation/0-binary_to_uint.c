#include "holberton.h"

/**
 * binary_to_uint - binary_to_uint
 * @b: b
 * Return: return
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 1, acum = 0, index;

	if (b == NULL)
		return (0);

	for (index = 1; b[index] != '\0'; index++)
		bin *= 2;

	index = 0;

	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] == '1')
			acum += bin;

		if (b[index] != '1' && b[index] != '0')
			return (0);

		bin /= 2;
	}

	return (acum);
}
