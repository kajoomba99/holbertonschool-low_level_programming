#include "holberton.h"

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
		{
			sign *= -1;
		} else if (s[i] >= 48 && s[i] <= 57)
		{
			num = num * 10 + (s[i] - 48);
		}else if (num > 0)
		{
			break;
		}

		i++;
	}
	return (num * sign);
}
