#include <stdio.h>
#include "holberton.h"

/**
 * print_number - prints an integer.
 * @n: a number.
 */

void print_number(int n)
{
	int d = 1, f = 10, digit = 0,pdigit = 0, comp = n, ld = n % 10;

	if (n > 9)
	{
		while (n > 10)
		{
			n /= 10;
			f *= 10;
			d++;
		}
		printf("f: %d, comp: %d, n: %d\n", f, comp, n);
		while (f >= 10)
		{
			digit = comp / f;
			pdigit = digit % 10;
			 _putchar(pdigit + '0');
			f /= 10;
		}
		_putchar(ld + '0');
	} else
	{
		_putchar(n + '0');
	}
}
