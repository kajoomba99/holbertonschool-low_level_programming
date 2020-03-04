#include <stdlib.h>
/**
 * alloc_grid - alloc_grid
 * @width: width
 * @height: height
 * Return: double pointer.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width < 0 || height < 0)
		return (NULL);

	p = malloc(sizeof(p) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);

		if (p[i] == NULL)
		{
			free(p[i]);
			return (NULL);
		}
	}

	return (p);
}
