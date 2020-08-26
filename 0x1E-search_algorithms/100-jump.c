#include "search_algos.h"
#include <math.h>
/**
 * jump_search - jump_search
 * @array: array
 * @size: size
 * @value: value
 * Return: index
 */
int jump_search(int *array, size_t size, int value)
{
	int start = 0;
	size_t end = 0;
	size_t x = 0;

	if (array == NULL)
		return (-1);

	while (array[end] < value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += sqrt(size);
		if (end > size - 1)
			break;
	}
	printf("Value found between indexes [%d] and [%ld]\n", start, end);
	for (x = start; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);

}
