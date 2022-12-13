#include "main.h"
/**
 * print_alphabet_x10 - This function prints alphabeths ten times in lowercase
 * Return - Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i;
	char ch;

	i = 0;

	while (i <= 9 )
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}

	i++;
	_putchar('\n');

	}

}
