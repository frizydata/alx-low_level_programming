#include "main.h"
/**
 * _pow_recursion - This function returns the value of x raised to power of y
 * @x: Base number
 * @y: Exponent number
 * Return: Value of x raise to power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
