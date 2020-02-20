#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: char array.
 * Return: the string converted to upper.
 */
char *string_toupper(char *s)
{
	int l, i;

	while (s[l] != '\0')
		l++;

	for (i = 0; i < l;  i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (s[i] - 32);
	}
	s[i] = '\0';
	return (s);
}
