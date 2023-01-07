#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints number of arguments passed to it
 * @argc: number of command line argument
 * @argv: array that contains the program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
