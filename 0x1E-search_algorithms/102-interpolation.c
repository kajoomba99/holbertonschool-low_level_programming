#include "search_algos.h"

/**
 * interpolation_search - interpolation_search
 * @array: array
 * @size: size
 * @value: value
 * Return: the index found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;

	if (!array || !size)
		return (-1);

	while (1)
	{
		pos = low + (((double)(high - low) /
			(array[high] - array[low])) *
			(value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value > array[pos])
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
