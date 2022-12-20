#include "main.h"
/**
 * _puts - prints a string, followed by a new line.
 * @str: input string to print.
 * Return: no return.
 */

void _puts(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[c]);
			c++;
		}
	}
}
