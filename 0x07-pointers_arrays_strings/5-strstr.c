#include "holberton.h"
#include <stdio.h>
/**
 * _strstr -  locates a substring.
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, r;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (r = i, j = 0; needle[j] != '\0'; r++, j++)
		{
			if (needle[j] != haystack[r] || haystack[r] == '\0')
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
