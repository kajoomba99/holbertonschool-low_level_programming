#include "3-calc.h"
/**
 * get_op_func - get_op_func
 * @s: s
 * Return: return
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (*ops[i].op != *s && i < 4)
		i++;

	if (s == NULL || *ops[i].op != *s || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	return (ops[i].f);
}
