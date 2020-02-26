#include "holberton.h"
/**
 * _strlen_recursion - lentgh of a string.
 * @s: string.
 * Return: lentgh of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * check_palindrome - check if a string is a palindrome.
 * @s: String.
 * @i: int.
 * @f: int.
 * Return: return value.
 */
int check_palindrome(char *s, int i, int f)
{
	if (f < 0)
		return (1);
	if (s[i] == s[f])
		return (check_palindrome(s, i + 1, f - 1));
	else
		return (0);
}
/**
 * is_palindrome - is_palindrome
 * @s: String.
 * Return: return value.
 */
int is_palindrome(char *s)
{
	int l = _strlen_recursion(s);

	return (check_palindrome(s, 0, (l - 1)));
}
