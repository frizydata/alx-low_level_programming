#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string to print in reverse.
 * Return: no return.
 */

void print_rev(char *s)
{
	int c = 0;

	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}

	for (c--; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

