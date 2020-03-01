#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: aguments pased by consoles
 * Return: 0
 */
int main(int argc __attribute__((unused)),
	char *argv[] __attribute__((unused)))
{
	int rv = 0;

	if (argc > 1)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	} else
	{
		printf("Error\n");
		rv = 1;
	}

	return (rv);
}
