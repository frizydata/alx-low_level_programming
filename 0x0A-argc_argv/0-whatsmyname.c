#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its name, followed by a newline
 * @argc: numner of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
