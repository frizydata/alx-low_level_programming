#include "main.h"
/**
 * factorial - This function returns the factorial of a given number
 * @n: The given number to return factorial for
 * Return: Factorial of given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
