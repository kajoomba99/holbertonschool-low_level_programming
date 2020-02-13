#include "holberton.h"
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character that will be chacked.
 * Return: 1 if is a digit.
 *
 */

int _isdigit(int c)
{
	int rv;

	if (c >= 48 && c <= 57)
		rv = 1;
	else
		rv = 0;

	return (rv);
}
