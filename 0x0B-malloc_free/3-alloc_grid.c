#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int *p1, **p2;
	p1 = malloc(sizeof(int) * (width * heihgt));
	if (p1 == NULL)
		return (NULL);

	p2 = p1;
}
