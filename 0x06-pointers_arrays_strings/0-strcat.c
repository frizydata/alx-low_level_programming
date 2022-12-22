#include "main.h"
/**
 *_strcat - This function concatenates two strings
 * @dest: First string to iterate
 * @src: Second string to concatenate to dest
 * Return: Pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
	{
		a++;
	}

	for (b = 0; src[b]; b++)
	{
		dest[a++] = src[b];
	}

	return (dest);
}
