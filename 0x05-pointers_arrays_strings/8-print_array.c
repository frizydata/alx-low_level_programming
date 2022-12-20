#include "main.h"
#include <stdio.h>
/**
 * print_array: Prints n elements of an array of integers
 * @a: The input array
 * @n: The number of elements of the array to be printed
 *Return: No return
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + 1));

		if (i != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
