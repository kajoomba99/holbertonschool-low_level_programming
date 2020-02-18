#include "holberton.h"
/**
 * _strlen - returns the length of a string.
 * @s: String.
 * Return: always the longitude of @s.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
