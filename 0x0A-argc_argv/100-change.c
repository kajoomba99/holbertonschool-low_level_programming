#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * is_digit - verify if a parameter is a digit
 * @c: parametes
 * Return: 0 or 1
 */
int is_digit(char *c)
{
	int rv = 1, i;
	if (strlen(c) > 1)
	{
		if (c[0] == '-')
			i = 1;
		else
			i = 0;
		for (; c[i] != '\0'; i++)
		{
			if (!isdigit(c[i]))
				rv = 0;
		}
	} else 
	{
		rv = 0;
	}
	return (rv);
}
/**
 * coins_number - useful function
 * @c: number
 * Return: number of coins
 */
int coins_number(int c)
{
	int cr = 0, count = 0;

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

	return (count - 1);
}
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
	int rv = 0;

	if (argc == 2)
	{
		if (is_digit(argv[1]))
		{
			c = atoi(argv[1]);

			if (c > 0)
			{
				printf("%i\n", coins_number(c));
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
	}
	else
	{
		printf("Error\n");
		rv = 1;
	}
	return (rv);
}
