#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fl;
	int sl;
	int tl;
	int cl;
	
	for (fl = 48; fl <= 57; fl++ )
	{
		for(sl = fl; sl <= 57; sl++)
		{
			for(tl = sl; tl <= 57; tl++)
			{
				for(cl = tl; cl <= 57; cl++)
				{
					putchar(fl);
					putchar(sl);
					putchar(32);
					putchar(tl);
					putchar(cl);
					if(fl != 9 && sl != 9 && tl != 9 && cl != 9)
			                {
                		        putchar(44);
		                        putchar(32);
			                }
				}
			}
		}
	}	

	return (0);
}
