#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - string_nconcat
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: c
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int longs1 = 0, longs2 = 0, i = 0, r = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	longs1 = strlen(s1);

	if (n > strlen(s2))
		longs2 = strlen(s2);
	else
		longs2 = n;

	c = malloc(longs1 + longs2 + 1);

	if (c == NULL)
		return (NULL);

	while (s1[i] != '\0')
		c[i] = s1[i], i++, r++;

	for (i = 0; i < longs2; i++, r++)
		c[r] = s2[i];

	c[r] = '\0';

	return (c);
}
