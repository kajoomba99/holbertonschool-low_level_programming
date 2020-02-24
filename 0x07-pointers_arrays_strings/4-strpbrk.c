#include "holberton.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String.
 * @accept: String.
 * Return: gets the length of a prefix substring.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, f = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				break;
			}
		}

		if (f > 0)
		{
			break;
		}
	}

	return (s + i);
}
