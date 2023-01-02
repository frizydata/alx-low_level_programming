#include "main.h"
/**
 * _memset - This function fills a memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Input variable of character to fill s
 * @n: number of bytes to fill
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
