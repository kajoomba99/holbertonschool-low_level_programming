#include <stdlib.h>
#include <stdio.h>

/**
 * get_size - get_size.
 * @c: char pointer.
 * Return: lenght of string c.
 */
int get_size(char *c)
{
	int i;

	while (c[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - str_concat
 * @s1: s1
 * @s2: s2
 * Return: return.
 */
char *str_concat(char *s1, char *s2)
{
	int lenght, i = 0, j = 0, str1 = 0, str2 = 0;

	char *p, *empty;

	empty = "";

	if (s1 == NULL)
		s1 = empty;
	else
		str1 = get_size(s1);

	if (s2 == NULL)
		s2 = empty;
	else
		str2 = get_size(s2);

	lenght = str1 + str2;

	p = malloc((lenght + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	while (s2[j])
	{
		p[i] = s2[j];
		j++;
		i++;
	}

	p[lenght] = '\0';

	return (p);
}
