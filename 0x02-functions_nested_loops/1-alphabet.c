#include <stdio.h>
/**
 * main - This program prints alphabeth is lowercase
 * Return: Always 0 (Succress)
 */


void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return;
}
