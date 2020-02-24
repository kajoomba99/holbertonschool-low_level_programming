#include "holberton.h"
/**
 * _strchr - locates a character in a string.
 * @s: String.
 * @c: String.
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found.
 */
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
