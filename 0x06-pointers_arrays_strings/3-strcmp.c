#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * @s1: string to be compared with s2.
 * @s2: string to be compares with s1.
 * Return: If str1 < str2, the function returns a value less than 0.
 * If str1 == str2, the function returns 0.
 * If str1 > str2, the function returns a value greater than 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
