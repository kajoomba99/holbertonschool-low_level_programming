#include "variadic_functions.h"
/**
 * print_strings - print_strings
 * @separator: separator
 * @n: n
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	char *c;

	va_start(pa, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(pa, char *);

		if (c != NULL)
			printf("%s", c);
		else
			printf("(nil)");

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(pa);
}
