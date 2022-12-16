#include "main'h"
/**
 * print_diagonal - prints diagonally
 * Return: Always 0
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int a, b;
		
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b < a)
				{	
					_putchar(' ');
				}
				else if (b == a)
				{
					_putchar('\\');
				}
			}
		_putchar('\n');
		}
	}
}
				
