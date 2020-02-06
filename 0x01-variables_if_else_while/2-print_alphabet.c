#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	int nl = 10;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar(nl);

	return (0);
}
