#include "holberton.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: String.
 * @accept: String.
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int flag = 0, counter = 0, i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				flag++;
				break;
			}
		}

		if (flag > 0)
		{
			counter++;
			flag = 0;
		} else
		{
			break;
		}
	}

	return (counter);
}
