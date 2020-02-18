#include <stdio.h>
#include "holberton.h"
/**
 * int _strlen - returns the length of a string.
 * @*s: String.
 */
int _strlen(char *s)
{
	int i = 0;
	printf("%p\n", s);
	while (s[i] != '\0')
		i++;

	return (i);
}
