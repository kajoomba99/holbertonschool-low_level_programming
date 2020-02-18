#include "holberton.h"
/**
 * print_rev - prints a string, in reverse.
 * @s: string.
 */
void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = (i-1); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
