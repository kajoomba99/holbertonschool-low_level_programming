#include "holberton.h"
/**
 * puts2 - prints every other character of a string.
 * @str: Pointer.
 */
void puts2(char *str)
{
	int d = 0, i = 0;

	while (str[d] != '\0')
		d++;

	while (i < d)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar(10);
}
