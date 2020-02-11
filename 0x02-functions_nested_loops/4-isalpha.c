#include <ctype.h>
#include "holberton.h"

/**
 * _isalpha - this function check if a parameter is a letter..
 * @c: is the letter that will be checked
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
