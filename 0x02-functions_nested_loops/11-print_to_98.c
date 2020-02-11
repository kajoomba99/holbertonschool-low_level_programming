#include <stdio.h>
#include "holberton.h"

/**
 * main - check the code for Holberton School students.
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

		if ( init > 98 )
		{
			init--;
		}else
		{
			init++;
		}
		printf(",");
	}

	printf("\n");
}
