#include "holberton.h"

/**
 * print_sign - check the code for Holberton School students.
 * @n:  is a name that could be possitive or negative.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	int rv;

	if (n > 0)
	{
		_putchar('+');
		rv = 1;
	} else if (n == 0)
	{
		_putchar('0');
		rv = 0;
	} else
	{
		_putchar('-');
		rv = -1;
	}

	return (rv);
}
