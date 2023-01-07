#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two numbers as int
 * @argc: 
 * @argv:
 * Return: Result of multiplication, Error and 1 if argument not equal to two
 */

int main(int argc, char *argv[])
{
	int result;

	if (arg != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1] * atoi(argv[2]));
		printf("%d/n", result);
		return (0);
	}
}
