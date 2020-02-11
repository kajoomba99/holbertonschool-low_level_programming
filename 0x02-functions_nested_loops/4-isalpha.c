#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - this function check if a parameter is a letter..
 * @c: is the letter that will be checked
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
