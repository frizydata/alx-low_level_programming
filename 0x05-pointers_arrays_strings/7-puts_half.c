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
		for (b = a / 2; str[b] != '\0'; ++b)
			_putchar(str[b])
	}
	else
	{
		for (b = ((a - 1) / 2) + 1; str[b] != '\0'; ++b)
			_putchar(str[b]);
	}

	_putchar('\n');
}
