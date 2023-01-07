#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers as int
 * @argc: number of command line argument
 * @argv: array that ci=ontains the program command line argument
 * Return: Result of multiplication, Error and 1 if argument not equal to two
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
