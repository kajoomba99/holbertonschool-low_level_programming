#include "holberton.h"

/**
 * print_times_table - check the code for Holberton School students.
 * @n: Integer.
 *
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, j, init = 0, fd, sd, td, rsd;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (init >= 0 && init <= 9)
				{
					_putchar(init + '0');
				} else if (init >= 10 && init <= 99)
				{
					fd = init / 10;
					sd = init % 10;
					_putchar(fd + '0');
					_putchar(sd + '0');
				} else if (init >= 100 && init <= 999)
				{
					fd = init / 100;
					rsd = init / 10;
					sd = rsd % 10;
					td = init % 10;
					_putchar(fd + '0');
					_putchar(sd + '0');
					_putchar(td + '0');
				}
				init += i;

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');

					if (init < 10)
					{
						_putchar(' ');
						_putchar(' ');

					} else if (init < 100)
					{
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
			init = 0;
		}
	}


}
