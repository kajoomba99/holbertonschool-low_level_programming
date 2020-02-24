#include <stdio.h>
#include "holberton.h"

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			break;
		i++;
	}

	return (s[i] == c ? (s + i) : '\0');
}
