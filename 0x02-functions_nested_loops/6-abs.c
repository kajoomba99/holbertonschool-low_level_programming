#include "holberton.h"

/**
 * _abs - check the code for Holberton School students.
 * @n: is a number:
 * Return: Always 0.
 */
int _abs(int n)
{
	int r;

	if (n < 1)
	{
		r = n * (-1);
		return (r);
	}
	return (n);
}
