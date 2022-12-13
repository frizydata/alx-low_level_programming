#include "main.h"
/**
 * _isalpha - Checks if c is a letter, lowercase or uppercase
 * @c: The alphabet to check
 * Return: 1 if c is letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
