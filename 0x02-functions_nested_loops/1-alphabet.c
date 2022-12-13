#include <stdio.h>
/**
 * print_alphabet - This program prints alphabeth is lowercase
 * Return: Always 0 (Succress)
 */


void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
