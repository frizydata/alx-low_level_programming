#include "main.h"
/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n, j;

	n = 0;
	while (n < 8)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar (a[n][j]);
		}
		_putchar ('\n');
	}
	n++;
}
