#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ should be printed.
 * Retrun:  void.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar(92);
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
