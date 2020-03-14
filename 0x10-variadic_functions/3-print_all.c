#include "variadic_functions.h"
/**
 * print_all - print_all
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list pa;
	char *c = "";

	opts myop[] = {
		{'c', fun_c},
		{'i', fun_i},
		{'f', fun_f},
		{'s', fun_s}
	};

	va_start(pa, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == myop[j].op)
			{
				printf("%s", c);
				myop[j].print_type(pa);
			}
			j++;
		}
		c = ", ";
		i++;
	}

	va_end(pa);
	printf("\n");
}
/**
 * fun_c -fun_c
 * @list: list
 */
void fun_c(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * fun_s -fun_s
 * @list: list
 */
void fun_s(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
		s = "(nil)";

	printf("%s", s);
}
/**
 * fun_f -fun_f
 * @list: list
 */
void fun_f(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * fun_i -fun_i
 * @list: list
 */
void fun_i(va_list list)
{
	printf("%d", va_arg(list, int));
}
