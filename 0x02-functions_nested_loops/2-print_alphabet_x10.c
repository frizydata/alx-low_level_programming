#include "main.h"
/**
 * print_alphabetx10 - This function prints alphabeths ten times in lowercase
 * Return - Always 0 (Success)
 */

void print_alphabetx10(void)
{
	int i;
	char ch;

	i = 0;

	while (i <= 9 )
	{
		ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}

	i++;
	putchar('\n');

	}

}
