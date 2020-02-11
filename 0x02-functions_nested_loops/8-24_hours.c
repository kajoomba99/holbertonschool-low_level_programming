#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int h, md, mu, fd, ld;
	for (h = 0; h < 24; h++)
	{
		for (md = 0; md < 6; md++)
		{
			for (mu = 0; mu < 10; mu++)
			{
				if (h < 10)
				{
					_putchar('0');
					_putchar(h+'0');
				}else
				{
					fd = h / 10;
					ld = h % 10;
					_putchar(fd+'0');
					_putchar(ld+'0');
				}
					_putchar(':');
					_putchar(md+'0');
					_putchar(mu+'0');
					_putchar('\n');
			}
		}
	}
}
