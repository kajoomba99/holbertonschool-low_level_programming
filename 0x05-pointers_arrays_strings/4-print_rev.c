#include "holberton.h"

void print_rev(char *s)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}