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
	unsigned int longs1 = 0, longs2 = 0, i, r = 0;
	char *c;
	char *e = "";

	if (s1 == NULL)
		s1 = e;

	if (s2 == NULL)
		s2 = e;

	for (i = 0; s1[i] != '\0'; i++)
		longs1 += 1;

	for (i = 0; s2[i] != '\0'; i++)
		longs2 += 1;

	if (n < longs2)
		longs2 = n;

	c = malloc(longs1 + longs2 + 1);

	if (c == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++, r++)
		c[i] = s1[i];

	for (i = 0; i < longs2; i++, r++)
		c[r] = s2[i];

	c[r] = '\0';

	return (c);
}
