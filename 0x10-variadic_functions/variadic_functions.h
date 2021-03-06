#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct options - options
 * @op: op
 * @print_type: print_type
 * Description: Longer description
 */
typedef struct options
{
	char *op;
	void (*print_type)();
} opts;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void fun_c(va_list list);
void fun_s(va_list list);
void fun_i(va_list list);
void fun_f(va_list list);
#endif
