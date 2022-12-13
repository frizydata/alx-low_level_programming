#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: the number to check
 * Return: 1 and + if (n > 0) or 0 and 0 if (n = 0) or -1 and - if (n < 0)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		_putchar('-');
		return(-1);
	}
}
