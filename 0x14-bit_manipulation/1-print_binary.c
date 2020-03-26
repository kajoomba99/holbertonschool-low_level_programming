#include "holberton.h"
/**
 * print_binary - print_binary
 * @n: n
 */
void print_binary(unsigned long int n)
{
	int c, result, band = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (c = 63; c >= 0; c--)
	{
		result = n >> c;

		if (result & 1)
		{
			_putchar('1');
			band = 1;
		}
		else if (band != 0)
		{
			_putchar('0');
		}
	}
}
