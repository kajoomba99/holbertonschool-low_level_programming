#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i, fd, sd, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				fd = i;
			}  else
			{
				fd = i / 10;
				sd = i % 10;
			}

			_putchar(fd + '0');

			if (i >= 10)
			{
				_putchar(sd + '0');
			}
		}
		_putchar(10);
	}
}
