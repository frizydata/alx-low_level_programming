#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string to print from
 * Return: No rturn
 */

void puts_half(char *str)
{
	int a, b;

	for (a = 0;str[1] != '\0'; ++a)
	
	if (a % 2 == 0)
	{
		for (n = l / 2; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}
	else
	{
		for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
			_putchar(str[n]);
	}

	_putchar('\n');
}
