#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input string to print from
 * Return: No rturn
 */

void puts_half(char *str)
{
	int a, b;
	int i = 0;

	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (a = i / 2; str[a] != '\0'; a++)
		{
			b = str[a];
			_putchar(b);
		}
	}
	else
	{
		for (a = ((i - 1) / 2) + 1; str[a] != '\0'; a++)
		{
			b = str[a];
			_putchar(b);
		}
	}

	_putchar('\n');
}

