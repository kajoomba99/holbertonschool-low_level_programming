#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
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
