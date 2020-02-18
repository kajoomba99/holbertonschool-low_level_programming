#include <stdio.h>
#include "holberton.h"
/**
 * puts_half - prints half of a string.
 * @str: string.
 */
void puts_half(char *str)
{
	int i = 0, l, r;

	while (str[i] != '\0')
		i++;

	r = i;

	if ((i % 2) != 0)
		i--;

	l = (i / 2);
	r -= l;

	while (str[r] != '\0')
	{
		_putchar(str[r]);
		r++;
	}

	_putchar('\n');
}
