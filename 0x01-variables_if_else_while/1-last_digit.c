#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - Entry point
 *  Return: Always return 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int l = n % 10;

	printf("Last digit of %d is %d ", n, l);
	
	if (l > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (l == 0)
	{
		printf("and is 0\n");
	}
	else if (l < 6 && l != 0)
	{
		printf("and less than 6 and not 0\n");
	}

	return (0);
}
