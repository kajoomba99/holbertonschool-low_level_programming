#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		print_alphabet();
	}
	_putchar('\n');
}
