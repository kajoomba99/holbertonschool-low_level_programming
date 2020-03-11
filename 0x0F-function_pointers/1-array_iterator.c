#include <stdio.h>

/**
 * array_iterator - array_iterator
 * @array: array
 * @size: size
 * @action: action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array && size >= 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

