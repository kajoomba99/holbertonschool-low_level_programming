#include <stdlib.h>
/**
 * array_range - array_range
 * @min: min
 * @max: max
 * Return: p
 */
int *array_range(int min, int max)
{
	int l, i;
	int *p;

	if (min > max)
		return (NULL);

	l = max - min + 1;

	p = malloc(l * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < l; i++, min++)
		p[i] = min;

	return (p);
}
