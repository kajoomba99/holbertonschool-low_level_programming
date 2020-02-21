#include "holberton.h"

char *rot13(char *s)
{
	int f = 13, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			f *= -1;
		s[i] = (s[i] + f);
		f = 13;
	}

	return (s);
}
