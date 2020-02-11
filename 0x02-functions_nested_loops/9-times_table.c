#include "holberton.h"

/**
 * times_table - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int init = 0, i, j, fd, ld;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (init < 10)
			{
				_putchar(init + '0');
			} else
			{
				fd = init / 10;
				ld = init % 10;

				_putchar(fd + '0');
				_putchar(ld + '0');

			}

			init += i;

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (init < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		init = 0;
	}
}
