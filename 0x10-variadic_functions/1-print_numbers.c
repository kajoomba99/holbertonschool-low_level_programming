#include "variadic_functions.h"
/**
 * print_numbers - print_numbers
 * @separator: separator
 * @n : n
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;

	va_start(param, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(param, int));

		if (separator && (i != (n - 1)))
			printf("%s", separator);
	}

	printf("\n");

	va_end(param);
}
