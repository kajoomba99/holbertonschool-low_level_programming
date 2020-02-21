#include "holberton.h"
/**
 * leet - encodes a string using rot13.
 * @s: string.
 * Return: string encriptada.
 */
char *leet(char *s)
{
	char mi[] = "aeotl";
	char ma[] = "AEOTL";
	char num[] = "43071";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == mi[j] || s[i] == ma[j])
			{
				s[i] = num[j];
			}
		}
	}

	return (s);
}
