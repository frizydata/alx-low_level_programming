#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: input string to print from
 * Return: no return
 */

void puts2(char *str)
{
	int c = 0;

	while (c >= 0)
	{
		if (str[c] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (c % 2 == 0)
		{
			_putchar(str[count]);
		}
		c++;
	}
}
