#include "main.h"
/**
 * _strncat - This function concatenates two strings with at
 * most n bytes from src
 * @dest: The first string to be iterated
 * @src: The second string to concatenate dest, not null-terminated
 * @n: bytes of src
 * @Return: Pointer to resultng string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a])
	{
		a++;
	}

	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	
	dest[a + b] = '\0';

	return (dest);
}
