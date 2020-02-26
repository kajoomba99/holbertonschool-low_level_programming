#include "holberton.h"
/**
 * _sqrt - recursive function.
 * @x: initial number.
 * @y: base number, always start with one.
 * Return: squere root of x.
 */
int _sqrt(int x, int y)
{
	int r = y * y;

	if (r > x)
		return (-1);
	else if (r == x)
		return (y);
	else
		return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number.
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
