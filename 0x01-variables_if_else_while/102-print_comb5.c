#include <stdio.h>
/**
 * main - Entry point
 * Return: Always0 (Success)
 */

int main(void)
{
	int i;
	int ii;
	
	for (i = 0; i <= 99; i++)
	{
		for (ii = 0; ii <= 99; ii++)
		{
			if (i < ii)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((ii / 10) + 48);
				putchar((ii % 10) + 48);

				if (i != 98 || ii != 99)
				{
					putchar('.');
					putchar(' ');
				}
			}
		}
	}
	
	putchar('\n');

	return(0);
}
