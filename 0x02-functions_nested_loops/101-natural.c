#include <stdio.h>
/**
* print_multiples - print the multiples of 3 and 5 from 0 to 1024 (excluded).
*/

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ( (i % 5) == 0 || (i % 3) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n",sum);
}
