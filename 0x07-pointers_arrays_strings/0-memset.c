#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: String.
 * @b: char.
 * @n: int.
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, l = 0;

	while (s[l])
		l++;

	if (n > (l - 1))
		n = l;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
