#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: argument counter
 * @argv: array of strings
 * Return: the sum of the positive numbers
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
