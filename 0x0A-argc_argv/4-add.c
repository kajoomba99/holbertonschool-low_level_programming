#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - antry point.
 * @argc: number of arguments
 * @argv: arguments pased by console
 * Return: 0
 */
int main(int argc __attribute__((unused)),
	char *argv[] __attribute__((unused)))
{
	int rv = 0, i, j, sum __attribute__((unused)) = 0;
	int len = 0, r = 0, d = 1, p = 0, n;

	if (argc > 0)
	{
		for (i = 1; i < argc; i++)
		{
			len = strlen(argv[i]);
			for (j = (len - 1); j >= 0; j--)
			{
				n = argv[i][j] - 48;
				r += n * d + p;
				d *= 10;
				if (isdigit(n))
				{
					rv = 1;
					break;
				}
			}

			if (rv == 1)
				break;

			sum += r;
			r = 0;
			d = 1;
		}
	}
	if (rv == 0)
		printf("%i\n", sum);
	else
		printf("Error\n");

	return (rv);
}
