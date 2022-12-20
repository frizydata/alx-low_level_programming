#include "main.h"
/**
 * swap_int - This function swaps the values of two ints
 * @a: The value to swap to b
 * @b: The value to swap to a
 * Return: The values of the ints exchanged
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
