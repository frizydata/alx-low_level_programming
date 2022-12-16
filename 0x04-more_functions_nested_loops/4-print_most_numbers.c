#include "main.h"
/* print_most_numbers - This function prints numbers except 2 and 4
 * Return: Always 0 (Success)
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != '2' && i != '4')
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
