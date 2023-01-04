#include "main.h"
/**
 * prime_no - checks if a number is a prime number
 * @n: input number to check
 * @c: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int prime_no(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	else
		return (0 + prime_no(n, c + 1));
}

/**
 * is_prime_number - checks if a number is a prime number
 * @n: input number to check
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (prime_no(n, 2));
}
