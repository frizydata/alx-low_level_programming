#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string to print from
 * Return: No rturn
 */

void puts_half(char *str)
{
	int i = 0, 1;
	
	while (i >= 0)
	{
		if (str[i] == '\0')
			break;
		i++;
	}

	if (i % 2 == 1)
	{
		a = i / 2;
	}
	else
	{
		a = (i - 1) / 2;
	}

	for (a++; a < i; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
