#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to print from
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	_putchar(n % 10);
	return (n % 10);
}
