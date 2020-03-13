#include "variadic_functions.h"
/**
 * sum_them_all - sum_them_all
 * @n: n
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list pa;

	va_start(pa, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pa, int);

	va_end(pa);

	return (sum);
}
