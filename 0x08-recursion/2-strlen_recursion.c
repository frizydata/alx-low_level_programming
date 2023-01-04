#include "main.h"
/**
 * _strlen_recursion - This function returns the length of a string
 * @s: Pointer to the string
 * Return: The lemgth of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + q));
	}
}
