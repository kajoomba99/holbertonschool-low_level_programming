#include "holberton.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: char array.
 * Return: the string converted to upper.
 */
char *string_toupper(char *s)
{
	int l;

	while (s[l] != '\0')
	{
		if (s[l] >= 'a' && s[l] <= 'z')
			s[l] = (s[l] - 32);
		l++;
	}
	return (s);
}
