#include "holberton.h"
/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle.
 * Return: void
 */

void print_triangle(int size)
{
	int i, s, n;

	if (size > 0)
	{

		for (i = 0; i < size; i++)
		{
			for (s = 1; s < (size - i); s++)
			{
				_putchar(' ');
			}

			for (n = 0; n <= i; n++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	} else
	{
		_putchar(10);
	}
}
