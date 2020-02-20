#include "holberton.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string.
 * Return: capitalice string.
 */
char *cap_string(char *s)
{
	int i = 0, f = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = (s[0] - 32);

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			f++;
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!')
			f++;
		if (s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')')
			f++;
		if (s[i] == '{' || s[i] == '}')
			f++;
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			f++;
		if (f == 2)
			s[i + 1] = s[i + 1] - 32;

		f = 0;
		i++;
	}

	return (s);
}
