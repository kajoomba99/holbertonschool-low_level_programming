#include <stdlib.h>
/**
 * _strdup - returns a duplicate of the string str..
 * @str: pointer.
 * Return: pointer.
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *p;

	while (str[i])
		i++;

	p = malloc(sizeof(char) * i);

	while (j < i)
	{
		p[j] = str[j];
		j++;
	}

	return (p);
}
