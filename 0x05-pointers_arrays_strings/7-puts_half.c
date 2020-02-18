#include "holberton.h"
/**
 * puts_half - prints half of a string.
 * @str: string.
 */
void puts_half(char *str)
{
	int i = 0, j, l;

	while (str[i] != '\0')
		i++;

	l = i;

	if ((i % 2) != 0)
		i--;

	for (j = (i / 2); j <= l; j++)
		_putchar(str[j]);

	_putchar('\n');
}
