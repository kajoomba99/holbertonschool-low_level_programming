#include "holberton.h"
/**
 * _strncpy - asdasdasd.
 * @dest: asdad.
 * @src: asdasd.
 * @n: sadadwee.
 * Return: asdasdsad.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
