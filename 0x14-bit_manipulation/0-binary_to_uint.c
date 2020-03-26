#include "holberton.h"

/**
 * binary_to_uint - binary_to_uint
 * @b: b
 * Return: return
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int acum = 0, index;

	if (b == NULL)
		return (0);

	for (index = 0; b[index] != '\0'; index++)
	{
		acum *= 2;

		if (b[index] == '1')
			acum += 1;

		if (b[index] != '1' && b[index] != '0')
			return (0);
	}

	return (acum);
}
