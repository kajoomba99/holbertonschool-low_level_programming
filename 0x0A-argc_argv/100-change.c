#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point.
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0;
 */
int main(int argc __attribute__((unused)),
	char *argv[] __attribute__((unused)))
{
	int c;
	int cr = 0, count = 0, rv = 0;

	if (argc == 2)
	{
		c = atoi(argv[1]);
		if (c > 0)
		{
			while (cr <= c)
			{
				if ((cr + 25) <= c)
					cr += 25;
				else if ((cr + 10) <= c)
					cr += 10;
				else if ((cr + 5) <= c)
					cr += 5;
				else if ((cr + 2) <= c)
					cr += 2;
				else
					cr += 1;

				count += 1;
			}
			printf("%i\n", count - 1);
		}
		else
		{
			printf("0\n");
		}
	}
	else
	{
		printf("Error\n");
		rv = 1;
	}
	return (rv);
}
