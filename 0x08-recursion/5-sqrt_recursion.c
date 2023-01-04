#include "main.h"
/**
 * raised_power - catalyzes the _sqrt_recursion function to perform operation
 * @n: input number
 * @i: iterator
 * Return: Square root of a number or -1
 */

int raised_power(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + raised_power(n, i + 1));
}

/**
 * _sqrt_recursion - This function returns the natural square root of a number
 * @n: The to return square root
 * Return: Square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	else
	{
		return (raised_power(n, 2));
	}
}
