#include <stdio.h>
#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s: a string.
 */

void rev_string(char *s)
{
	int l = 0, i, e, b = 0;
	char r[1000];

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l; i++)
		r[i] = s[i];

	r[i] = '\0';
	e = (l - 1);

	while (e >= 0)
	{
		s[b] = r[e];
		b++;
		e--;
	}
}
