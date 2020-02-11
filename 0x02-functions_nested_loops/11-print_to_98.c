#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - check the code for Holberton School students.
 * @n: int.
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	int init;

	for (init = n;;)
	{
		printf("%d", init);
		if (init == 98)
		{
			break;
		}

		if (init > 98)
		{
			init--;
		} else
		{
			init++;
		}
		printf(",");
	}

	printf("\n");
}
