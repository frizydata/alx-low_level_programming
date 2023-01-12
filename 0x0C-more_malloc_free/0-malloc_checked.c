#include <stdio.h>
#include "main.h"

/**
 * *malloc_checked - Allocates memory using malloc
 * @b: Amount of bytes
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	char *n;

	n = malloc(b)i;

	if (n == NULL)
		exit(98);

	return (n);
}
