#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - argstostr
 * @ac: ac
 * @av: av
 * Return: c
 */
char *argstostr(int ac, char **av)
{
	int acum = 0, i, l, p = 0, j;
	char *c;

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			acum += 1, j++;
	}
	c = malloc((acum + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (l = 0; av[i][l] != '\0'; l++)
		{
			c[p] = av[i][l];
			p++;
		}
		c[p] = '\n';
		p++;
	}
	return (c);
}
