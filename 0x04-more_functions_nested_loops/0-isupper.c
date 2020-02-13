#include "holberton.h"
/**
 * _isupper - Checks  for uppercase character.
 * @c: int variable, point to a character.
 * Return: 1 if the char is upper, return 0 if the char is not upper
 */

int _isupper(int c)
{
	int rv;

	if (c >= 65 && c <= 90)
		rv = 1;
	else
		rv = 0;

	return (rv);
}
