#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - 
 * @a: array of int.
 * @size: the size of the array a.
 */
void print_diagsums(int *a, int size)
{
	int sumd1 = 0, d1;
	int sumd2 = 0, d2;

	for (d1 = 0; d1 < (size * size); d1 += (size + 1))
	{
		sumd1 += a[d1];
	}

	for (d2 = (size - 1); d2 <= ((size * size) - size); d2 += (size - 1))
	{
		sumd2 += a[d2];
	}

	printf("%d, %d\n", sumd1, sumd2);
}
