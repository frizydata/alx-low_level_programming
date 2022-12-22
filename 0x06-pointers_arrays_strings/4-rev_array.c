#include "main.h"
/**
 * reverse_array - This function reverses elements of an array
 * @a: pointer to array
 * @n: number of elements to reverse
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int x, y, z;

	y = 0;
	z = n - 1;

	/**
	 * set x to the value of array a,
	 * y to the first element in the array,
	 * z to the last element in the array.
	 * set the first element to the last element
	 * then increment the first (which is last now)
	 * and decrement the last (which is first now)
	 */

	while (y < z)
	{
		x = a[y];
		a[y] = a[z];
		a[z] = x;
		y++;
		z--;
	}
}
