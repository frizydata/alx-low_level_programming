#include <stdio.h>
/**
 * main - Entry point
 * Return: Always0 (Success)
 */

int main(void)
{
	int i;
	int ii;
	while (i <= 9)
	{
		ii = 0;
		while (ii <= 9)
		{
			putchar(i + '0');
			putchar(ii +'0');
			
			ii++;
			putchar(',');
			putchar(' ');
		}
		
		i++;
	}

	putchar('\n');

	return(0);
}
