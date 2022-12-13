#include <stdio.h>
/**
 * main - This function prints alphabeths ten times in lowercase
 * Return - Always 0 (Success)
 */

void repeat_alphabeth(void)
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

	}

}

int main(void)
{
	repeat_alphabeth();
	return (0);
}
