#include <stdlib.h>
/**
 * malloc_checked - malloc_checked
 * @b: b
 * Return: p
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
