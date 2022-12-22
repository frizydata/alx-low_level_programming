#include "main.h"
/**
 * _strncpy - This function copies a string
 * @dest: The pointer to destination of the first string
 * @src: The pointer to the destination of the second string
 * @n: The bytes of @src
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
