#include "holberton.h"
/**
 * is_prime - check if a integer is a prime number.
 * @n: int.
 * @i: int.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		else
			return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}

	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - initialice the process.
 * @n: int.
 * Return: int.
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
