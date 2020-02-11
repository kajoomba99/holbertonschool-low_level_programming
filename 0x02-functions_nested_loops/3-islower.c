#include <ctype.h>
#include "holberton.h"

/**
 * _islower - checks if the c parameter is lowercase..
 * @c: The number to be checked
 * Return: Always 0.
 */
int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}

	return (0);
}
