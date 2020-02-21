#include "holberton.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: String.
 * Return: string.
 */

char *rot13(char *s)
{
	int i, j;

	char am[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char nz[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == am[j])
			{
				s[i] = nz[j];
				j = 52;
			}
		}
	}

	return (s);
}
