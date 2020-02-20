#include <stdio.h>
#include "holberton.h"
/**
 * reverse_array - reverse an array.
 * @a: int array.
 * @n: longitude of the array a.
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		tmp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = tmp;

		n--;
	}

}
