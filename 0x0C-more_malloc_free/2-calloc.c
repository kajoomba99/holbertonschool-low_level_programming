#include <stdlib.h>
#include <string.h>
/**
 * _memset - _memset
 * @ptr: ptr
 * @c: c
 * @n: n
 * Return: ptr
 */
char *_memset(char *ptr, char c, int n)
{
	int i;

	for (i = 0; i < n; i++)
		ptr[i] = c;

	return (ptr);
}
/**
 * _calloc - _calloc
 * @nmemb: nmemb
 * @size: size
 * Return: p
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	int l;

	if (nmemb == 0 || size  == 0)
		return (NULL);

	l = nmemb * size;
	p = (char *) malloc(l);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, l);

	return (p);
}
