#include "search_algos.h"
/**
 * printarr - printarr
 * @array: array
 * @l: l
 * @r: r
 */
void printarr(int *array, int l, int r)
{
	printf("Searching in array: ");

	for (; l <= r; l++)
	{
		if (l != r)
			printf("%d, ", array[l]);
		else
			printf("%d\n", array[l]);
	}
}
/**
 * binary_search - binary_search
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int m;

	while (l <= r)
	{
		printarr(array, l, r);
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
