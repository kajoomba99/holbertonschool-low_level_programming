#include <stdio.h>
/**
 * main - antry point.
 * @argc: numbers of arguments.
 * @argv: aguments pesed by console.
 * Return: 0
*/
int main(int argc __attribute__((unused)),
	char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
