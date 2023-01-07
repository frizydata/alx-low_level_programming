#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of command line argument
 * @argv: array that contains the program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
