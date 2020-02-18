#include "holberton.h"
/**
 * puts_half - prints half of a string.
 * @str: string.
 */
void puts_half(char *str)
{
	int i = 0, l;

	while (str[i] != '\0')
		i++;

	if ((i % 2) != 0)
		i--;

	l = (i/2);

	while(str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}

	_putchar('\n');
}
