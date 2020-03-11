#include "3-calc.h"
/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 0
 */
int main(int argc __attribute__((unused)),
char *argv[] __attribute__((unused)))
{

	int (*my_function_pointer)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error");
		exit(100);
	}

	my_function_pointer = get_op_func(argv[2]);

	res = my_function_pointer(atoi(argv[1]), atoi(argv[3]));

	printf("%i\n", res);
	return (0);
}
