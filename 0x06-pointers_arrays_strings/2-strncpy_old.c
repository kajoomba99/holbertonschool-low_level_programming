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

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	

	if (src[i] == '\0')
		dest[i] = '\0';

	return (dest);
}
